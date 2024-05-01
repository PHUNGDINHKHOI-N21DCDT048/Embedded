#include<stdio.h>
int main(){
    for(int i=0; i<=5; i++){
        if(i==3)
        {
            printf("i = %d \n", i);
            goto hami;
        }
    }
    hami:
    printf("hami");
}