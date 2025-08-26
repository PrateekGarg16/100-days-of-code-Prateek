#include<stdio.h>

int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int sum;
    sum = n*(n+1)/2;
    printf("The sum of first n numbers is : %d",sum);
    return 0;
}