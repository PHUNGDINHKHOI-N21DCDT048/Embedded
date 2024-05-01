#include <stdio.h>

int main() {
    
    char greeting[] = "hom nay co bai tap moi ve array";
    int count = 0;
    char i;
    char keyword;
    for ( i = 0; greeting[i] != '\0' ; i++) {
        if (greeting[i] == 'a') {
            count++;
        }
    }

    printf("Số lần kí tự 'a' xuất hiện trong chuỗi là: %d\n", count);
    
    return 0;
    
}