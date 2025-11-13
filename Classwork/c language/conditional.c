#include<stdio.h>
void main(){
    //odd even
    int number;
    printf("Enter Number to check odd or even\n");
    scanf("%d",&number);
    if(number%2==0){
        printf("Number is even\n");
    }else{
        printf("Number is odd\n");
    }

    //income tax calculate
    int income;
    int annualincome;
    int netincome;
    int taxincome;
    printf("enter your monthly income\n");
    scanf("%d",&income);
     annualincome=income*12;
    if(annualincome>0 && annualincome<300000){
            taxincome=annualincome*0;
            netincome=annualincome-taxincome;
            printf("your annual income is =%d\n",annualincome);
            printf("you tax is=%d\n",taxincome);
            printf("your net income is=%d\n",netincome);

    }else if(annualincome>300000 && annualincome<500000){
            taxincome=(annualincome*3)/100;
            netincome=annualincome-taxincome;
            printf("your annual income is =%d\n",annualincome);
            printf("you tax is=%d\n",taxincome);
            printf("your net income is=%d\n",netincome);

    }else if(annualincome>500000 && annualincome<700000){
            taxincome=(annualincome*5)/100;
            netincome=annualincome-taxincome;
            printf("your annual income is =%d\n",annualincome);
            printf("you tax is=%d\n",taxincome);
            printf("your net income is=%d\n",netincome);

    }else if(annualincome>400000 && annualincome<500000){
            taxincome=(annualincome*7)/100;
            netincome=annualincome-taxincome;
            printf("your annual income is =%d\n",annualincome);
            printf("you tax is=%d\n",taxincome);
            printf("your net income is=%d\n",netincome);

    }else if(annualincome>500000 && annualincome<600000){
            taxincome=(annualincome*9)/100;
            netincome=annualincome-taxincome;
            printf("your annual income is =%d\n",annualincome);
            printf("you tax is=%d\n",taxincome);
            printf("your net income is=%d\n",netincome);

    }else{
        taxincome=annualincome*0;

        printf("your annual income is very low no pay any tax\n");

    }

    //Grading System
    int marks;
    printf("enter Your Marks\n");
    scanf("%d",&marks);
    if(marks>90 && marks<100){
        printf("You Got A+");
    }else if(marks>80 && marks<90){
        printf("You Got A");
    }else if(marks>70 && marks<80){
        printf("You Got B+");
    }else if(marks>60 && marks<70){
        printf("You Got B");
    }else if(marks>50 && marks<60){
        printf("You Got C+");
    }else if(marks>40 && marks<30){
        printf("You Got C");
    }else {
        printf("You are Fail Better luck next Time");
    }



}
