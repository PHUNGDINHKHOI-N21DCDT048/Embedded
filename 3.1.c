#include<stdio.h>
int main(){
    char greeting[]= "hello world";
    int length;
    for( length= 0 ; greeting[length] != '\0'; length++ );
    printf(" The length of greeting is: %d", length);
    return 0; 

}