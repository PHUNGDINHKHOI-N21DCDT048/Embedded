#include<stdio.h>
int main(){
    int num1 , num2;
    printf("Enter the num1:");
    scanf("%d", &num1);
    printf("Enter the num2:");
    scanf("%d", &num2);
    if ( num1 == num2 )
    {
        printf("num1 is equal to num2");
    }
    else if ( num1 < num2 )
    {
        printf("num1 is less than num2");
    }
    else
    {
        printf("num1 is larger than num2");
    }
    return 0;
}