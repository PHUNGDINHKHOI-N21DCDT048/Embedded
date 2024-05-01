#include<stdio.h>
int main(){
    khoi:
    float a;
    float b;
    char x;
    float add, sub, multi, div;
    printf("Enter the value a: ");
    scanf("%f", &a);
    printf("Enter the value b: ");
    scanf("%f", &b);
    printf("Enter the mathOperation( + , - , * , / , o ): ");
    scanf(" %c", &x);
    switch (x){
    case '+':
        add= a+b;
        printf(" Result of a + b = %.2f\n ", add);  
    goto khoi;
    case '-':
    sub= a-b;
        printf(" Result of a - b = %.2f\n ", sub);
    goto khoi;
    case '*':
        multi= a*b;
        printf(" Result of a * b = %.2f\n ", multi);
    goto khoi;
    case '/':
        div= a/b;
        printf(" Result of a / b = %.2f \n ", div);
    goto khoi;
    default:
        printf(" Invalid case!");
    goto khoi;
    case 'o':
        printf("Outed program!");
    break;
    }
    return 0;
    
    
}