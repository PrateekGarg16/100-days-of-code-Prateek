#include<stdio.h>

int main() {
    int lenght,breath;
    printf("Enter the value of length : ");
    scanf("%d",&lenght);
    printf("Enter the value of breath : ");
    scanf("%d",&breath);
     int area,perimeter;
     area = lenght*breath;
     perimeter = 2*lenght*breath;
    printf("The area of rectangle is : %d\n",area);
    printf("The perimeter of rectangle is :%d",perimeter);
    return 0;
}