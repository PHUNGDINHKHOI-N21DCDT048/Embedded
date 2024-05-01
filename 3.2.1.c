#include<stdio.h>
#include<math.h>
void mdy(){
    int month, year, last_day;
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            last_day = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            last_day = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                last_day = 29;
            else
                last_day = 28;
            break;
        default:
            printf("Invalid month! \n");
    }
    printf("Last day of month %d year %d is %d.\n", month, year, last_day);

    return 0;
    }

void giaithua(){
    int x;
    int i = 1;
    long long A = 1;
    printf(" enter value for x ");
    scanf("%d",&x);
    while(i <= x){  // factorial is product from 0 to n
        A = i*A;
        i++;        // ascending
    }
    printf(" Value %d! is %lld ",x,A);
    return 0;
    }

void equal(){
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

void maximum(){
     int a;
    int b;
    int c;
    printf("Enter the value(a, b, c): ");
    scanf("%d" "%d" "%d", &a, &b, &c);
    int max;
    max = a;
    if (b > max) {
        max = b;
    }
    else{}
    if (c > max) {
        max = c;
    }
    else{}
    printf("The maximum value among %d, %d, and %d is: %d\n", a, b, c, max);
    return 0;
    }

void taixiu(){
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf(" The number is even.\n ");
    }
    else{
        printf(" The number is odd.\n ");
    }
    return 0;
    }


void electric(){
    Khoi:
    long lva=600;
    long lvb=900;
    long lvc=1200; 
    long lvd=1500;
    long fee;
    int  kwh;
    char x;
    printf("Enter the (a, b):");
    scanf(" %c", &x);
    switch(x){
        case 'a':  
            printf("Enter the kwh:");
            scanf(" %ld", &kwh);
            if(kwh <= 100){
                fee= kwh * lva;
                printf("The fee of %ld kwh is: %ldvnd \n", kwh, fee);
            }
            else if (kwh >=100 && kwh <=150){
                fee= (100 * lva) + ((kwh - 100)*lvb);
                printf("The fee of %ld kwh is: %ldvnd \n", kwh, fee);

            }
            else if (kwh > 150 && kwh <= 250 ){
                fee=  (100 * lva) + (50 * lvb) + ((kwh - 150) * lvc);
                printf("The fee of %ld kwh is: %ldvnd \n", kwh, fee);
            }
            else{
                fee=(100 * lva) + (50 * lvb) + (100 * lvc) + ((kwh- 250) * lvd);
                 printf("The fee of %ld kwh is: %ldvnd \n", kwh, fee);
            }
            goto Khoi;
        case 'b':
            printf("Out program! \n ");
            break;
        default:
            printf("Invalid case! \n " );
            goto Khoi;


    }
    return 0;

    }

void caculate(){
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
void Bai215(){
    int a; 
    printf("Enter the number: ");
    scanf("%d", &a);
    while( a !=0){
        printf("%d" , a % 10 );
        a/=10; 
    }
}