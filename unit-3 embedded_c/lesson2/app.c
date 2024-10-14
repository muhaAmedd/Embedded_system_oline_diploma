#include "uart.h"
unsigned char string_buffer[100]="learn-in-depth:mohamed hashem";
unsigned char const string2_buffer[100]="hello"; 
void main(void){
    Uart_send_string(string_buffer);
}