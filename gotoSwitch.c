#include<stdio.h>
int main(){
    char command;
    Khoi:
    printf("Enter your command (A,B,C):");
    scanf(" %c", &command);
    switch(command){
        case 'A':
         int num1, A=1, i=1;
        printf("Enterttt num1:");
        scanf("%d", &num1);
        if(num1==0){
         printf("Please enter num1 again");
        }
    while (i<=num1){
    A=A*i;
     
    i++;

    }
    printf(" The value of %d! is: %d.\n", num1, A);   

    goto Khoi;
    return 0;
    break;

    case 'B':
     printf("Exit program.\n");
     return 0;
     break;
    default:
    printf("invalid command.\n");
    }

}
