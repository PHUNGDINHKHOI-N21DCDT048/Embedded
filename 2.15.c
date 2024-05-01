#include<stdio.h>
int main(){
    int a; 
    printf("Enter the number: ");
    scanf("%d", &a);
    while( a !=0){
        printf("%d" , a % 10 );
        a/=10; 
    }
}