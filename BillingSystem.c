//BILLING SOFTWARE

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\n\n-------------CHINESE FAST FOOD CENTER-----------\n");
    int choice,choice2;
    int qty1,qty2,qty3,qty4,qty5,price,price1=0,price2=0,price3=0,price4=0,price5=0,price6=0;
    float gst,total_bill,vat,discount;
    printf("\n---------MAIN MENU---------\n");
    printf("\n 1.Chicken Noodles (PRICE:60/-)\n 2.Chicken Manchuria(PRICE:80/-)\n 3.Veg Manchuria(PRICE:50/-)\n 4.Egg Noodles(PRICE:50/-)\n 5.Fried Rice(PRICE:50/-\n\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\nNumber of plates:");
        scanf("%d",&qty1);
        price=60;
        price1=price1+(qty1*price);
        printf("price=%d\n",price1);
        break;

    case 2:
        printf("\nNumber of plates:");
        scanf("%d",&qty2);
        price=80;
        price2=price2+(qty2*price);
        printf("price=%d",price2);
        break;

    case 3:
        printf("\nNumber of plates:");
        scanf("%d",&qty3);
        price=50;
        price3=price3+(qty3*price);
        printf("price=%d",price3);
        break;

    case 4:
        printf("\nNumber of plates:");
        scanf("%d",&qty4);
        price=50;
        price4=price4+(qty4*price);
        printf("price=%d",price4);
        break;

    case 5:
        printf("\nNumber of plates:");
        scanf("%d",&qty5);
        price=50;
        price5=price5+(qty5*price);
        printf("price=%d",price5);
        break;

    default:
        printf("Invalid choice\nPlease select a valid choice!!");
        exit(0);
    }
    do
    {
        printf("\n\nDo you need anything else?");
        printf("\n1.Yes\n2.No Thanks");
        printf("\n\nYour Response:");
        scanf("%d",&choice2);

        if(choice2==1){
            printf("\n MAIN MENU:\n");
            printf("\n 1.Chicken Noodles\n 2.Chicken Manchuria\n 3.Veg Manchuria\n 4.Egg Noodles\n 5.Fried Rice\n\n");
            printf("\nEnter your choice:");
            scanf("%d",&choice);

            switch (choice)
            {
            case 1:
                printf("\nNumber of plates:");
                scanf("%d",&qty1);
                price=60;
                price1=qty1*price;
                printf("price=%d\n",price1);
                break;

            case 2:
                printf("\nNumber of plates:");
                scanf("%d",&qty2);
                price=80;
                price2=qty2*price;
                printf("price=%d",price2);
                break;

            case 3:
                printf("\nNumber of plates:");
                scanf("%d",&qty3);
                price=50;
                price3=qty3*price;
                printf("price=%d",price3);
                break;

            case 4:
                printf("\nNumber of plates:");
                scanf("%d",&qty4);
                price=50;
                price4=qty4*price;
                printf("price=%d",price4);
                break;

            case 5:
                printf("\nNumber of plates:");
                scanf("%d",&qty5);
                price=50;
                price5=qty5*price;
                printf("price=%d",price5);
                break;

            default:
                printf("Invalid choice\nPlease select a valid choice!!");
                exit(0);
            }
        }

        if(choice2==2){
        total_bill=price1+price2+price3+price4+price5;
        printf("\nBill=%f",total_bill);
        gst=(total_bill*18)/100;
        vat=(total_bill*5)/100;
        discount=(total_bill*3)/100;
        total_bill=(total_bill+gst+vat)-discount;
        printf("\nGST=%f/-\n",gst);
        printf("\nVAT=%f/-\n",vat);
        printf("\nSpecial Disount=%f/-\n",discount);
        printf("\nYour Total Bill=%f/-\n",total_bill);
        printf("\n\n\n------Thank You!!------");
        printf("\n\n------Visit Again!!-------");
    }
    }while(choice2!=2);
    return 0;
}
