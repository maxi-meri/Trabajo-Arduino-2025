#include <Servo.h> // Libreria para el servoMotor 

const int sensor1 = 8;    // Declaracion de Pines
const int sensor2 = 9;      
const int motor1 = 12;        
const int motor2 = 10;      

Servo servoMotor;
unsigned int distancia;
bool leerSensor = true; // Variable para controlar cuándo leer el sensor

unsigned long tiempoAnterior = 0;
unsigned long intervaloMedicion = 200;
unsigned long tiempoMotor = 0;
int estadoMotor = 0;
bool movimientoActivo = false;

void setup() {
  Serial.begin(9600);       
  pinMode(sensor1, INPUT);    
  pinMode(sensor2, OUTPUT);   
  pinMode(motor1, OUTPUT);    
  servoMotor.attach(motor2);  
  servoMotor.write(0);       
  digitalWrite(motor1, LOW);  
}

void loop() {
  unsigned long tiempoActual = millis();             
  if (tiempoActual - tiempoAnterior >= intervaloMedicion) {
    tiempoAnterior = tiempoActual;                   
    medirSensor();                                  
  }
  if (movimientoActivo) {
    controlarMotor(tiempoActual);
  }
}

void medirSensor() {
  // Envío de pulso TRIGGER
  digitalWrite(sensor2, LOW);
  delayMicroseconds(2);
  digitalWrite(sensor2, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensor2, LOW);

  // Lectura del pulso ECHO
  unsigned long duracion = pulseIn(sensor1, HIGH, 30000);
  if (duracion == 0) return; // Si no hubo lectura, salir

  distancia = duracion / 58; // Conversión a cm
  
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // Activación del motor si está entre 8 y 16 cm
  if (distancia <= 16 && distancia >= 8 && leerSensor && !movimientoActivo) {
    leerSensor = false;
    movimientoActivo = true;
    tiempoMotor = millis();
    estadoMotor = 0;

    servoMotor.write(180);
    digitalWrite(motor1, HIGH);
  }
}
