Dispensador Automático de Comida para Mascotas
Proyecto final de Arduino que implementa un sistema automático para dispensar alimento a tu mascota utilizando un sensor ultrasónico y un micro servomotor.

***********************

Integrantes del Grupo
- Nicolas Olivares, nicolasolivares28.02@gmail.com
- Nehuen Mattivi, Nehuenvmattivi@gmail.com
- Leandro Farias, leandrofarias93@gmail.com
- Tomas Cereceda, tomy13281617@gmail.com

***********************

Docentes y Materia
- **Materia:**
Laboratoria de Computacion 1
 
- **Docentes:**
Matias Gagliardo, 
Pedro Iriso

************************

Descripción General del Sistema
Este proyecto consiste en un dispensador automático de comida para mascotas.  
El sistema **detecta cuando el perro se acerca** utilizando un sensor ultrasónico **HC-SR04**.  
Cuando el animal está a una distancia menor a cierto umbral, el **Micro Servomotor MG90S** se activa y abre brevemente el compartimento para liberar una porción de comida.

El sistema fue implementado con un **Arduino Uno**, alimentado por USB y montado en una maqueta física.

***********************

Funcionalidades
- Detección de presencia mediante ultrasonido.  
- Activación automática del servomotor.   
- Dispensado simple y repetible de alimento.  
- Reinicio automático tras completar cada ciclo.

***********************

Requisitos Funcionales Cumplidos
1. Detectar presencia con sensor ultrasónico.  
2. Activar servomotor cuando un objeto esté dentro del rango.  
3. Asegurar que el servo vuelva a su posición inicial.  
4. Estructura de código limpia y comentada.  
5. Maqueta funcional que represente un dispensador de comida.

***********************

Componentes Utilizados
- **Arduino UNO**  
- **Sensor Ultrasónico HC-SR04**  
- **Micro Servomotor MG90S**  
- **Protoboard**  
- **6 cables macho–hembra + 6 cables macho–macho**  
- **Cable USB para programación y alimentación**

*************************

Esquema Eléctrico / Diagrama de Conexiones



************************

Máquina de Estados
El sistema trabaja con la siguiente lógica:

1. **Esperando**  
   - El sensor mide distancias constantemente.  
2. **Detectado**  
   - Si la distancia es menor al umbral, pasa al estado siguiente.  
3. **Dispensando**  
   - Se activa el servo → abre el compartimento.  
4. **Reinicio**  
   - El servo vuelve a su posición inicial y retorna a *Esperando*.

***********************

Instrucciones de Uso y Ejecución
1. Conectar el Arduino según el esquema del proyecto.  
2. Subir el código desde la carpeta `/src` del repositorio.  
3. Alimentar el Arduino mediante USB o fuente externa de 5V.  
4. Colocar el dispensador en la maqueta con alimento dentro.  
5. Acercarse a menos de **8cm a 16cm** para activar el sistema.

**********************

Imágenes y Video Demostrativo
 
![Maqueta del proyecto](media/wa)

***********************

## 📄 Licencia
Este proyecto se distribuye bajo la licencia **MIT**.  
Puedes usarlo, modificarlo y compartirlo libremente mencionando a los autores.

---

## 🙌 Créditos
Proyecto realizado por los integrantes del grupo para la materia [Nombre de la materia], utilizando Arduino y componentes electrónicos básicos.
