#include<stdio.h>
int main(){
    int x;
    printf("Nhap x:");
    scanf("%d", &x);
    if (x>0){
        printf( "x is a positive. ");
    }
      else if (x<0) {
        printf("x is a negative.");
    }
      else{
        printf( "x is zero");
      }
    return 0;
}
