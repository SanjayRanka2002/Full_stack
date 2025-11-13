#include<stdio.h>
void main(){
    //Assesment
    int price;
    int select;
    int amount;
    int total;
    int allamount;
    int n;
    char k;
    do{
    printf("1.Pizza   price =180rs/pcs\n");
    printf("2.Burger  price =100rs/pcs\n");
    printf("3.Dosa    price =150rs/pcs\n");
    printf("4.Idli    price =50rs/pcs\n\n");

        printf("please, Enter a digit you want :");
        scanf("%d",&select);
    switch(select){
    case 1:
        printf("You  select Pizza. \n");
        price=180;
        printf("Enter the quantity: ");
        scanf("%d",&n);
        amount=price*n;
        total=total+amount;

        printf("Amount : %d\n",amount);
        printf("Total Amount is = %d\n",total);
        break;
    case 2:
        printf("You  select Burger. \n");
        price=100;
        printf("Enter the quantiy: ");
        scanf("%d",&n);
        amount=price*n;
        total=total+amount;
        printf("Amount : %d\n",amount);
        printf("Total Amount is = %d\n",total);
        break;
    case 3:
        printf("You  select Dosa. \n");
        price=150;
        printf("Enter the quantiy: ");
        scanf("%d",&n);
        amount=price*n;
        total=total+amount;
        printf("Amount : %d\n",amount);
        printf("Total Amount is = %d\n",total);
        break;
    case 4:
        printf("You  select Idli. \n");
        price=50;
        printf("Enter the quantiy: ");
        scanf("%d",&n);
        amount=price*n;
        total=total+amount;
        printf("Amount : %d\n",amount);
        printf("Total Amount is = %d\n",total);
        break;
    default :
        printf("Choose correct option !\n");
    }
        printf("If you Want to continue press (Y/N)?");
        scanf(" %c",&k);



    }while(k =='y' || k == 'Y');





}
