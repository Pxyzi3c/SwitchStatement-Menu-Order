#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main()
{
    char order;

    p("\n           MENU CODE:");
    p("\n\n            B = Burger");
    p("\n            F = French Fries");
    p("\n            P = Pizza");
    p("\n            S = Sandwiches");
    p("\n\n          ************************************************************");
    p("\n Enter order: ");
    s("%c", &order);
    switch(order){
    case 'B':
    case 'b':
             p("\n Your order is Burger");
             break;
    case 'F':
    case 'f':
             p("\n Your order is French Fries");
             break;
    case 'P':
    case 'p':
             p("\n Your order is Pizza");
             break;
    case 'S':
    case 's':
             p("\n Your order is Sandwiches");
             break;
    default: p("\n INVALID ENTRY!");
    }

getch();
}

/*PROBLEM SOLVING USING CONDITIONAL STATEMENTS*/
/*Using Switch statement, write a program that displays the following menu for the food items available to take order from the customer:
    B=Burger
    F=French Fries
    P=Pizza
    S=Sandwiches*/
/*The program inputs the type of food and quantity. It finally displays the total charges for the order according to the following criteria:
    Burger=Rs. 200
    French fries= Rs. 50
    Pizza= Rs. 500
    Sandwiches= Rs. 140*/

