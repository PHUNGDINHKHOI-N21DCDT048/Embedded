#include<stdio.h>
#include<string.h>
enum orderStatus{
    PENDING, 
    PROCESSING, 
    SHIIPPED, 
    DELIVERED, 
    CANCELED
    };
struct Book{
    char  title[100];
    char  author[100];
    float price; 
    };

struct Order{
    int orderNumber; 
    struct Book book;
    enum orderStatus status;
    };

void displayBook (struct Book book){
    printf("Title:  %s\n", book.title);
    printf(" Author: %s\n", book.author);
    printf(" Price: %.2f\n", book.price);
    }

void displayOrder(struct Order order){
    printf("Order Number: %d\n", order.orderNumber);
    printf("Book information:\n ");
    displayBook(order.book);
    printf(" Status: ");
    switch (order.status){
        case PENDING:
            printf("Pending\n"); 
            break;
        case PROCESSING:
            printf("Processing\n");
            break;
        case SHIIPPED:
            printf("Shipped\n");
            break;
        case DELIVERED:
            printf("Delivered\n");
            break;
        case CANCELED:
            printf("Canceled\n");
            break;
            
        }
    }

int main(){
    Khoi2:
    char khoi1;
    printf("Run (r) or Exit(E):");
    scanf("%c", &khoi1);

   switch (khoi1){
   case 'r':
   Khoi3:
    char Book; 
    printf("Enter the bookq:");
    scanf("%s", &Book);
    switch(Book){
        case 'A':
            struct Book book1 ={"Hoc tieng Viet", "A", 60};
            struct Order order1={1, book1, PENDING};
            displayOrder(order1);
            goto Khoi3;
            break;
        case 'B':
            struct Book book2 ={"Hoc tieng Anh", "B", 65.5};
            struct Order order2={2, book2, DELIVERED};
            displayOrder(order2);
            goto Khoi3;
            break;
        case 'C':
            struct Book book3 ={"Hoc tieng Nhat", "C", 55.99};
            struct Order order3={3, book3, SHIIPPED};
            displayOrder(order3);
            goto Khoi3;
            break;
        case 'D':
            struct Book book4 ={"Hoc tieng Duc", "D", 60.99};
            struct Order order4={4, book4, PROCESSING};
            displayOrder(order4);
            goto Khoi3;
            break;
        case 'F':
            struct Book book5 ={"Hoc tieng Phap", "F", 50.99};
            struct Order order5={5, book5, CANCELED};
            displayOrder(order5);
            goto Khoi3;
            break;    
        default:
            printf("Unknown book.\n");
            goto Khoi3;
        break;
        }   
    case 'E':
            printf("Exit program!");
            break;
   
    default:
        printf("invalid");
            goto Khoi2;
            
            break;
   }
   return 0;
}



