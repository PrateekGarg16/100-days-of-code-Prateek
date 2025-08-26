#include<stdio.h>

int main() {
    int principal,rate,time;
    printf("Enter the value of principal : ");
    scanf("%d",&principal);
    printf("Enter the value of rate : ");
    scanf("%d",&rate);
    printf("Enter the value of time : ");
    scanf("%d",&time);
    int simple interest;
    simple interest = principal*rate*time/100;  
    printf("The value of simple intrest is : %d\n",simple interest);
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int amount;
    amount = principal * pow((1 + (rate / (n * 100))), n * time);
    int compound interest;
    compound interest = amount - principal;
    printf("The value of compound interest is : %d",compound interest);  
    return 0;

}