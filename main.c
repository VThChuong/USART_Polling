#include <avr/Serial.h>
#include <stdio.h>
#include <util/delay.h>
#include <stdint.h>
#include <avr/io.h>

int main(){
	USART_init();
	while(1){
		UDR0 = 'a';
		_delay_ms(1000);
	}
}
