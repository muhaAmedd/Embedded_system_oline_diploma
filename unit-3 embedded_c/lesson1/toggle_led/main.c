#include<stdio.h>
#include"platform.h"



#define RCC_BASE 0x40021000
#define GPIO_BASE 0x40010800

typedef union{
    uint32 all_pins;
    struct{
        uint32 pin0:1;
        uint32 pin1:1;
        uint32 pin2:1;
        uint32:10;
        uint32 pin13:1;
        uint32:6;
        uint32 pin20:1;
        uint32 pin21:1;
        uint32 pin22:1;
        uint32 pin23:1;
    };
}reg;

volatile reg* APB2ENR =(volatile reg*)(RCC_BASE+0x18);
volatile reg* CRH=(volatile reg*)(GPIO_BASE+0x04);
volatile reg* ODR=(volatile reg*)(GPIO_BASE+0x0c);

void delay(void);

int main(void){
APB2ENR->pin2=1;
CRH->all_pins=0;
CRH->pin21=1;

while(1){//toggle led
    ODR->pin13=1;
    delay();
    ODR->pin13=0;
    delay();
}

    return 0;
}

void delay(void){
    for(int i=0;i<100000;i++);

}

