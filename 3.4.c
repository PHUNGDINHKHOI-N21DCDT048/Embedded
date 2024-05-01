#include <stdio.h>

int main() {
   char greet1[20];      
   char greet2[20];   
   printf("Enter greet1 :") ;
   scanf ("%s", &greet1);
   fgets(greet1, sizeof(greet1), stdin);
   int length;

   for (length = 0; greet1[length] != '\0'; length++) 
   {
      greet2[length] = greet1[length];
   }
   greet2[length] = '\0';  
   printf("Chuoi greet1 = %s \n", greet1);
   printf("Chuoi greet2 = %s \n", greet2);

   return 0;
}