#include "mbed.h"


AnalogIn sensor(p20);
DigitalOut led(LED1);

int main() {

        
        while(true){
           
            if (sensor <= 0.2){
                led = 1; 
                
            }
            else
            {
                led = 0;
            }
           
        }
    
}