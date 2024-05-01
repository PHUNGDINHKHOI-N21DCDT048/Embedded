#include<stdio.h>
int add(){
    static int f=0;
    f++;
    return f;

}

int main(){
    int i=0;
    for (i=0;i<10; i++)
    {
      int result;
      result= add();
      printf("Result:%d \n", result);
    }
    
}