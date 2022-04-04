# Introducción a Arduino
*Aleksander Borysov Ravelo*<br>
*Lucas Olivares Pérez*

## Características
El LED de la placa del Arduino UNO debe parpadear variando su tiempo de apagado/encendido según una función seno de forma fluida.

## Implementación
Se implementó la función map() incluida por defecto en Processing para extender el rango del seno desde [-1, 1] hasta la amplitud que se desee, 
que se interpretará como el tiempo transcurrido entre parpadeos del LED de la placa. Para lograr que el parpadeo sea continuo no es posible depender 
de la función delay(), así que, en su lugar, utilizando la función millis() apagamos o encendemos el LED sin parar del todo el programa.

## Referencias
- [Referencia de Arduino](https://www.arduino.cc/reference/en/)
- [Implementación de la función map](https://forum.processing.org/one/topic/recreate-map-function.html)
