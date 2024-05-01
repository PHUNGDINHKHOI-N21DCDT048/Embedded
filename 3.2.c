#include <stdio.h>

int main() {
    
    char greeting[] = "hom nay co bai tap moi ve array";
    int count = 0;
    int i;
    char keyword;
    printf("Enter keyword:");
    scanf("%c", &keyword);
     printf("%c xuat hien o vi tri:\n",keyword);   
    for ( i = 0; greeting[i] != '\0' ; i++) {
        if (greeting[i] == keyword) {    
            printf("%d \n", i );   
            count++;
        }
          
    }

    printf("The %c apprear in string is: %d\n", keyword, count);
    
    return 0;
    
}