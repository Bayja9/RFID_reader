#include <wiringPi.h>
#include <stdio.h>
int LED1 = 8;
int LED2 = 9;			/* GPIO26 as per wiringPi, GPIO12 as per BCM, pin no.32 */
int main(){
	wiringPiSetup();	/* initialize wiringPi setup */
	pinMode(LED1,OUTPUT);	/* set GPIO as output */
	pinMode(LED2,OUTPUT);

	while (1){
		digitalWrite(LED1,HIGH);		/* write high on GPIO */
		digitalWrite(LED2, LOW);		
		delay(1000);
		digitalWrite(LED1, LOW);		/* write low on GPIO */
		digitalWrite(LED2,HIGH);		
		delay(1000);
    }
}