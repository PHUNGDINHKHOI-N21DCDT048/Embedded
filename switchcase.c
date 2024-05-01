#include<stdio.h>
int main(){
    char grade;
    printf("Enter your grade( A, B, C):");
    scanf("%c", &grade);
    switch(grade){
      case 'A':
        printf("Exellent!\n");
        break;
      case 'B': 
        printf("Good job!\n");
        break;
      case 'C':
        printf("Satisfactory.\n");
        break;
      default:
        printf("Invalid grade");
        break;
    }
    return 0;
}