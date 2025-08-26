#include<stdio.h>

int main() {
    float radius;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    float area,circumfernce;
    float pi;
    pi = 3.14;
    area = (pi * radius * radius);
    circumfernce = (2 * pi * radius);
    printf("area of circle is : %.2f\n",area);
    printf("circumfernce of circle is : %f",circumfernce);
    return 0;
}