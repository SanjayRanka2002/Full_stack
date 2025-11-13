#include<stdio.h>
//arithmatic operator
void main(){
    int a;
    int b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("sum of %d and %d is=%d\n",a,b,a+b);
    printf("sub of %d and %d is=%d\n",a,b,a-b);
    printf("mul of %d and %d is=%d\n",a,b,a*b);
    printf("div of %d and %d is=%d\n",a,b,a/b);
//assignment operator
int number;
number+=1;
printf("enter number that increment\n");
scanf("%d",&a);
printf("new number is increment 1=%d\n",number);

//relational operator
int age;
printf("enter age----\n");
scanf("%d",&age);
if(age>=18){
    printf("you are eligible for vote\n");
}else if(age <18){
    printf("you are not eligible for vote \n");
}else {
    printf("you are 100% eligible for vote\n");
}

//logical operator
int income;
int gst;
int total;

printf("enter your income\n");
scanf("%d",&income);
if(income>10000 && income<20000){
    printf("Your gst is 0%\n");
    gst=(income*0)/100;
    total=gst+income;
    printf("gst is=%d\n",gst);
    printf("total is=%d\n",total);
}else if(income>20000 && income<30000){
    printf("Your gst is 18%\n");
    gst=(income*18)/100;
    total=gst+income;
    printf("gst is=%d\n",gst);
    printf("total is=%d\n",total);
}else{
    printf("Your gst is 20%\n");
    gst=(income*20)/100;
    total=gst+income;
    printf("gst is=%d\n",gst);
    printf("total is=%d\n",total);
}


}
