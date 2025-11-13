#include<stdio.h>
void main(){
    int n,a2000,b1000,c500,d200,e100,f50,g20,h10;
    printf("Enter a number :");
    scanf("%d",&n);

    a2000=n/2000;
    n=n%2000;

    b1000=n/1000;
    n=n%1000;

    c500=n/500;
    n=n%500;

    d200=n/200;
    n=n%200;

    e100=n/100;
    n=n%100;

    f50=n/50;
    n=n%50;

    g20=n/20;
    n=n%20;

    h10=n/10;
    n=n%10;


    printf("\n Rs. 2000 : %d ",a2000);
    printf("\n Rs. 1000 : %d ",b1000);
    printf("\n Rs.500 : %d ",c500);
    printf("\n Rs.200 : %d ",d200);
    printf("\n Rs.100 : %d ",e100);
    printf("\n Rs.50 : %d ",f50);
    printf("\n Rs.20 : %d ",g20);
    printf("\n Rs.10 : %d ",h10);



}
