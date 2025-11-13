#include<stdio.h>
void main(){
    //positive,Negative and Zero
    int number;

    printf("Enter Number to check if is positive , negative or zero\n");
    scanf("%d",&number);
    if(number==0){
        printf("Number is zero");
    }else if(number>0){
        printf("Number is positive\n");
    }else {
        printf("Number is negative\n");
    }
    //Even or odd
    printf("enter number to check odd or even\n");
    scanf("%d",&number);
    if(number%2==0){
        printf("Number is even\n");

    }else {
        printf("Number is odd\n");
    }
    //Pass of fail check
    int a;
    int b;
    int c;
    int avg;
    int percent;
    printf("enter  Three marks to check Pass of fail\n");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)*100/300;
    printf("your percent is %d ",avg);
    if(avg>33){
        printf("you pass this exam\n");
    }else if(avg==33){
        printf("you are pass may be or not be\n");
    }else {
        printf("You are fail , Better luck next time\n");
    }
    //check vowel or consonant
    char check;
    printf("enter character to check vowel or consonent\n");
    scanf("%s",&check);
    if(check=='a'|| check=='e'||check=='i'||check=='o'||check=='u'){
        printf("character is vowel\n");
    }else {
        printf("character is consonant\n");
    }

    //check leap year
    int year;
    printf("enter year to check leap year\n");
    scanf("%d",&year);
    if(year%400==0 ||year%4==0){
        printf("Year is leap\n");
    }else {
        printf("year is not leap\n");
    }
    //check largest number
    printf("enter three number to check which number is big among them\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is bigger of all\n");
    }else if(b>c && b>a){
        printf("b is bigger of all\n");
    }else{
        printf("c is bigger of all\n");
    }
    //check a triangle is valid or not
    int angles;
    printf("enter three angles that is valid or not\n");
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    if(sum==180){
        printf("it is valid triangle\n");
    }else {
        printf("It is not valid triangle\n");
    }
    //uppercase , lowercase ,special character or digit
    printf("enter character to check uppercase,lowercase,special or digit\n");
    scanf("%s",&check);
    if(check>='A' && check<='Z'){
        printf("character is uppercase\n");
    }else if(check>='1' && check<='9'){
        printf("It is digit\n");
    }else if(check>='a' && check<='z'){
        printf("chatecter is lowercase");
    }else {
        printf("character is symbolic");
    }

    //discount
    int amount;
    int total;
    int paid;
    printf("enter your amount\n");
    scanf("%d",&amount);
    if(amount>5000){
            paid=(amount*20/100);
            total=amount-paid;
        printf("you have 20% discount\n");
        printf("you pay only %d",total);

    }else if(amount>2000){
            paid=(amount*10/100);
            total=amount-paid;
        printf("you have 10%discount\n");
        printf("you pay only%d",total);

    }else {
        printf("you have no discount\n");
    }
    //
}
