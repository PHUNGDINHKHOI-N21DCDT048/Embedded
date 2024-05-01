#include<stdio.h>
int num[6];
int main(){
    int  i=0;
    for (i=0; i<5;  i++)
    {
        num[i]= i+1;
    }
    for(i=0; i<5;  i++)
    {
        printf("%d", num[i] );
    }
    return 0;
    
}
