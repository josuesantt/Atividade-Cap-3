#include <studio.h>

int main(){
    float c;
    float f;

    printf("Escvreva o valor da temperatura: ");
    scanf("%f" ,&c);

    f=c *9/5 + 32;

    printf("/nA Temeperatura %.2f Celsius em Fahrenheit, é %.2f F°.", c, f);
}