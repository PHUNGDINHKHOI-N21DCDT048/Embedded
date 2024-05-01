#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    }

void swap2( int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp; 
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    
}

int Bai1(int *a, int *b) {
    return *a + *b;
    }

void Bai2(int *a, int *b, int *tong){
    *tong = *a + *b;
    }

void Bai3(char *arr){
    int length = strlen(arr);
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int Bai5(int *a, int *b){
    if (*a>*b)
    {
        return *a;
    }
    else
    {
        return  *b;
    }
}

void bai7(){
        int x[4];
        int i;
        for( i = 0;i<4; ++i){
            printf("&x[%d] = %p\n", i , &x[i]);
        }
        printf("Address off array x: %p ", x);
        return 0;
    }


void bai8(){
    int myNumbers[4]= {25, 50, 75, 100};
    printf("%d\n", *(myNumbers +1));
    printf("%d", *(myNumbers + 2));
}

void bai9(){
    int myNumbers[4]= {25, 50, 75, 100};
    int *ptr = myNumbers;
    int i;

    for(i=0; i<4; i++){
        printf("%d\n ",*(ptr+i));
    }
}



void Malloc(){
    int *ptr;
    int n, i;
    printf("Enter number of element:");
    scanf("%d", &n);
    printf("Entered number of elements: %d\n", n);
    ptr= (int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memorey not allocated.\n");
        exit(0);
    }
    else{
        printf("Memory successfully allocated using malloc. \n");

        for(i=0; i < n; ++i){
            ptr[i]= i + 1;
        }
        for(i=0; i < n ; ++i){
            printf("%d", ptr[i]);
        }
    }
    free(ptr);
    return 0;
}


void bai6.1(){
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers; 
    int i=0;
    for ( i = 0; i < 5; i++) {
        printf("%d ", *ptr); 
        ptr++;
    }
    return 0;

}

void Bai4.1(){
    int *arr, n, i;
    
    // Input total number of elements
    printf("Input total number of elements (1 to 100): ");
    scanf("%d", &n);
    
    // Check if the number of elements is valid
    if (n < 1 || n > 100) {
        printf("Invalid input. Number of elements should be between 1 and 100.\n");
        return 1; // Exit with error
    }
    
    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with error
    }
    
    // Input elements
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Find the largest element
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Output the result
    printf("Largest element: %d\n", max);
    
    // Free dynamically allocated memory
    free(arr);
    
    return 0; // Exit successfully
    
}



int main()
{
    int bt;
    printf("Input Bai tap so: ");
    scanf("%d", &bt);
    switch (bt)
    {
    case 4:
        printf("start bai tap 4\n");
        int x ;
        int y ;
            printf("Enter x:");
            scanf("%d",&x);
            printf("Enter y:");
            scanf("%d",&y);
            swap (&x,&y);
            printf("x = %d\n", x);
            printf("y = %d\n", y);
        break;
    case 1:
        printf("start bai tap 1\n");
        int num1, num2;
            printf("Enter num1: ");
            scanf("%d", &num1);
            printf("Enter num2: ");
            scanf("%d", &num2);
        int sum = Bai1(&num1, &num2);
            printf("The sum of the entered numbers is: %d\n", sum);

                return 0;
      
    break;   

    case 2:
            printf("Start bai tap 2\n");
        int so1, so2, tong;
            printf("Enter num1:");
            scanf("%d", &so1);
            printf("Enter num2:");
            scanf("%d", &so2);
        Bai2(&so1, &so2, &tong);
            printf("The sum of %d and %d is: %d", so1, so2, tong);
        break;

    case 3:
        printf("Start bai tap 3\n");
        char arr[] = "abcd efgh";
        printf("Enter array: %s\n", arr);
        Bai3(arr);
        printf("Array after reversed: %s", arr);
        break;
    case 5:
        printf("Start bai tap 5\n");
        int number1, number2;
        printf("Enter number1:");
        scanf("%d", &number1);
        printf("Enter number2:");
        scanf("%d", &number2);
        int Max = Bai5(&number1, &number2);
        printf("The maximum number is: %d", Max);
        return 0;
    case 6:
        int a1, b2;
        printf("Enter num1:");
        scanf("%d", &a1);
        printf("Enter num2:");
        scanf("%d", &b2);
        swap2(a1, b2);
        printf("After swap\n");
        printf("num1= %d\n",a1);
        printf("num2= %d",b2);

    case 7:
        bai7();
        break;
    
    case 8:
        bai8();
        break;

    case 9:
        bai9();
        break;

    case 10:
        Malloc();
        break;
    
    case 6.1:
        printf("Start bai 6:\n");
        bai6.1():


    case 11:
        Bai4.1();
        





        


    
    default:
        break;
    }
    
}
