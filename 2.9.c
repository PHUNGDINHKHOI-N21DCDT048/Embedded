#include<stdio.h>
int main(){
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