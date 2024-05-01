#include<stdio.h>
#include<string.h>
enum orderStatus{PENDING, PROCESSING, SHIIPPED, DELIVERED, CANCELED};
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
    printf("\n\n");
}

int main(){
    struct Book book1 ={"Hoc tieng Viet", "A", 60};
    struct Book book2 ={"Hoc tieng Anh", "B", 65.5};
    struct Book book3 ={"Hoc tieng Nhat", "C", 55.99};
    struct Book book4 ={"Hoc tieng Duc", "D", 60.99};
    struct Book book5 ={"Hoc tieng Phap", "E", 50.99};
    struct Order order1={1, book1, PENDING};
    struct Order order2={2, book2, DELIVERED};
    struct Order order3={3, book3, SHIIPPED};
    struct Order order4={4, book4, PROCESSING};
    struct Order order5={5, book5, CANCELED};

    printf("Oder information: \n");
    displayOrder(order1);
    displayOrder(order2);
    displayOrder(order3);
    displayOrder(order4);
    displayOrder(order5);

    return 0;
}



