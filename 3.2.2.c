#include <stdio.h>
 
void Swap(int a, int b){
    int x = a;
    a = b;
    b = x;   
}
 
int main()
{
    int a, b;
    printf("Enter a, b:\n");
    scanf("%d%d", &a, &b);
  
    printf("Befor swap :\n a = %d \nb = %d\n", a, b);
    
    Swap(a, b);
  
    printf("After swap:\n a = %d\nb = %d \n", a, b);
    return 0;
}