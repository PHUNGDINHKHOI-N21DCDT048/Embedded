#include<stdio.h>
enum EnumName{
    a,
    b=3,
    c,
};
int main(){
    printf("%d %d %d",a,b,c);
}