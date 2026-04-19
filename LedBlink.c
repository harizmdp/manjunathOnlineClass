#include <led.h>

int main()
{
    while(1)
    {
        LED1 = 0x2e; // Turn on LED1
        delay(1000); // Delay for 1 second
        LED1 = 0x01; // Turn off LED1
        delay(1000); // Delay for 1 second
    }
}