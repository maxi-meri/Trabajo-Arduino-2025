#include <Servo.h>

// --- Definición de pines ---
const int sensor1 = 8;        // Pin ECHO del sensor ultrasónico
const int sensor2 = 9;      // Pin TRIGGER del sensor ultrasónico
const int motor1 = 12;        // LED indicador
const int motor2 = 10;      // ServoMotor

// --- Declaracion del servo ---
Servo servoMotor;
unsigned int distancia;
bool leerSensor = true; // Variable para controlar cuándo leer el sensor

// --- Variables para control al sensor ---
unsigned long tiempoAnterior = 0;
unsigned long intervaloMedicion = 200;

// --- Variables para control de tiempo del motor ---
unsigned long tiempoMotor = 0;
int estadoMotor = 0;
bool movimientoActivo = false;
