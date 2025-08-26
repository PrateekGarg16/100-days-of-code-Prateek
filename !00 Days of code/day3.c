#include<stdio.h>

int main() {
    float Celsius;
    printf("Enter the value of Celsius : ");
    scanf("%f",&Celsius);
    float convert;
    convert = (Celsius*9/5)+32;
    printf("The value of fahrenheit : %f",convert);
    return 0;
}