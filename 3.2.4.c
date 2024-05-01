#include<stdio.h>
float s1, s2, s3, s4, s5; 
float  Average ;
void Enter(){
    do {
        printf("Enter s1: ");
        scanf("%f", &s1);
        printf("Enter s2: ");
        scanf("%f", &s2);
        printf("Enter s3: ");
        scanf("%f", &s3);
        printf("Enter s4: ");
        scanf("%f", &s4);
        printf("Enter s5: ");
        scanf("%f", &s5);


    }
    while (s1<0 || s2<0 || s3<0 || s4<0 || s5<0 || s1 >10|| s2>10 || s3>10 || s4>10 || s5>10);
}

void caculate(){
    Average = (s1+s2+s3+s4+s5) / 5;
    printf(" Average is: %.2f", Average);

}
//void print(){
    //printf(" Average is: %.2f", Average);
}
int main(){
    Enter();
    caculate();
    //print();
    return 0;
}
