#include<stdio.h>
void main(){
    /*
    //Question 1 or scanf
    char Name[]="shreeram";
    char Address[]="Ahamdabad";
    int Birth=5;
    int Age=23;

    printf("My Name Is %s",Name);
    printf("\n My BirthDate is %d",Birth);
    printf("\n My Age  is %d",Age);
    printf("\n My Address  is %s",Address);

    //Question 2
    int a,b;

    printf("\nEnter Two Numbers to sum,sub,mul and div :");
    scanf("%d%d",&a,&b);

    printf("sum of %d and %d =%d",a,b,a+b);
    printf("\nsub of %d and %d =%d",a,b,a-b);
    printf("\nmul of %d and %d =%d",a,b,a*b);
    printf("\ndiv of %d and %d =%d",a,b,a/b);

    //Question 3

    int c,square,Qube;
    printf("\nEnter a number i provide square and qube :");
    scanf("%d",&c);
    square=c*c;
    Qube=c*c*c;
    printf("\nSquare of %d is =%d",c,square);
    printf("\nQube of %d is =%d",c,Qube);

    //Questin 4
    float r,circle;
    printf("\nEnter Radious to print circle of area: ");
    scanf("%f",&r);
    circle=(float)3.14*r*r;
    printf("\nArea of Circle is %.1f",circle);

    //Question 5
    int area,height,base;
    printf("\nEnter Height and base :");
    scanf("%d%d",&height,&base);
    area=(height*base)/2;
    printf("\nArea of tringle is %d",area);

    //Question 6
    int interest,p,radious,t;
    printf("\nEnter p , r and t to calculate simple interest :");
    scanf("%d%d%d",&p,&radious,&t);
    interest=p*radious*t;
    printf("\n Simple Interest Is %d",interest);

    //Convert centigrade to farhenite
    int m,f;
    printf("\nEnter Centigrade Value :");
    scanf("%d",&m);
    f=(9*m/5)+32;
    printf("\n Farhenite Value is %d",f);

    //Percentage of 5 subject marks
    int marks,m1,m2,m3,m4,m5,percent,total;
    printf("\nEnter 5 subjects obtain  marks :");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    marks=m1+m2+m3+m4+m5;
    printf("\nEnter Total marks:");
    scanf("%d",&total);
    percent=marks *100/total;
    printf("\nPercent is %d",percent);

    //Swap Without Third variable
    int j,k;
    printf("\nEnter Numbers :");
    scanf("%d",&j);
    scanf("%d",&k);

    j=j+k;
    k=j-k;
    j=j-k;

    printf("\nFirst is %d",j);
    printf("\nsecond is %d",k);

    //Positive or Negative Number Check
    int check,Number;
    printf("\n Enter Number to check positive or negarive:");
    scanf("%d",&Number);
    if(check>0){
        printf("\n Number is Positive");
    }else{
        printf("\nNumber is Negative");
    }

    //Check Leap Year Or Not
    int leap;
    printf("\nenter  Year to check year is leap or not :");
    scanf("%d",&leap);
    if(leap%4==0 || leap%100==0){
        printf("\nYear is leap");
    }else if(leap%400==0){
        printf("\nYear is leap");
    }else{
        printf("\n Year is not leap");
    }

   //Max of Three Number
   int x,y,z;
   printf("\nEnter three numbers to check:");
   scanf("%d%d%d",&x,&y,&z);
    if(x>y){
        if(x>z){
            printf("\n x is big");
        }else{
            printf("\n z is big");
        }
    }else{
        if(y>z){
                printf("\n y is big");

        }else{
            printf("\n z is big");
        }
    }
    //percentage
    int marks1,marks2,marks3,marks4,marks5,additon,percent;
    int all=500;
    printf("\n Enter 5 numbers :");
    scanf("%d%d%d%d%d",&marks1,&marks2,&marks3,&marks4,&marks5);
    additon=marks1+marks2+marks3+marks4+marks5;
    percent=additon*100/all;

    printf("\n You Have Got %d ",percent);
    if(percent>75){
        printf("\nDistinction");
    }else if(percent>60 && percent<=75){
        printf("\nFirst class");

    }else if(percent>50 && percent<=60){
        printf("\nSecond class");

    }else if(percent>35 && percent<=50 ){
        printf("Pass clasee");

    }else{
        printf("You Fail");

    }

    //Switch
    int days;
    printf("\n1. Monday");
    printf("\n2. Tuesday\n");
    printf("\n3. Wednesday\n");
    printf("\n4. Thursday\n");
    printf("\n5. Friday\n");
    printf("\n6. saturday\n");
    printf("\n7. sunday\n");

    printf("Enter Number :");
    scanf("%d",&days);
    switch(days){
        case 1:
            printf("You choose monday");
            break;
        case 2:
            printf("You choose Tuesday");
            break;
         case 3:
            printf("You choose Wednesday");
            break;
         case 4:
            printf("You choose Thursday");
            break;
         case 5:
            printf("You choose  Friday");
            break;
         case 6 :
            printf("You choose saturday");
            break;
         case 7:
            printf("You choose sunday");
            break;
         default:
            printf("you entered wrong");


    }

    //operation
    int a,b,option;
    char operate;

    printf("\n  + additon ");
    printf("\n  - Substriction");
    printf("\n   * multipication");
    printf("\n   / for division");

    printf("\n choose an option :");
    scanf("%c",&operate);

    switch(operate){
        case '+':
        printf("\n Enter first number :");
        scanf("%d",&a);
        printf("\n Enter operator ");
        scanf(" %c",&operate);
        printf("\n Enter second number :");
        scanf("%d",&b);
        printf("\n sum is %d & %d is =%d",a,b,a+b);


        break;

        case'-':
        printf("\n Enter first number :");
        scanf("%d",&a);
        printf("\n Enter operator ");
        scanf(" %c",&operate);
        printf("\n Enter second number :");
        scanf("%d",&b);
         printf("\n min is %d & %d is =%d",a,b,a-b);
        break;


        case'*':
        printf("\n Enter first number :");
        scanf("%d",&a);
        printf("\n Enter operator ");
        scanf(" %c",&operate);
        printf("\n Enter second number :");
        scanf("%d",&b);
         printf("\n mul is %d & %d is =%d",a,b,a*b);
        break;


        case'/':
        printf("\n Enter first number :");
        scanf("%d",&a);
        printf("\n Enter operator ");
        scanf(" %c",&operate);
        printf("\n Enter second number :");
        scanf("%d",&b);
         printf("\n min is %d & %d is =%d",a,b,a/b);
        break;

        default:
            printf("\n Enter Valid input :");

    }


    int option,triangle,circle,rectangle,l,b,r,v,h;
    printf("1.  area of triangle");
    printf("\n 2.  area of circle");
    printf("\n 3.  area of rectangle");

    printf("\n Enter yout option :");
    scanf("%d",&option);

    switch(option){
    case 1:
        printf("\n Enter base :");
        scanf("%d",&v);
        printf("\n Enter height :");
        scanf("%d",&h);
        triangle=v*h/2;
        printf("area of triangle is %d ",triangle);
        break;
    case 2:
        printf("\n Enter radious :");
        scanf("%d",&r);
       circle=3.14*r*r;
        printf("area of circle is %d ",circle);
        break;
    case 3:
        printf("\n Enter length :");
        scanf("%d",&l);
        printf("\n Enter breadth :");
        scanf("%d",&b);
        rectangle=l*b;
        printf("area of rectangle is %d ",rectangle);
        break;
    default:
        printf("\n Enter valid input:");

    }


    //ten elements print
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
    }

    //51 to 50 for while loop
    int i=51;
    while(i<=60){
            printf("%d\n",i);
        i++;
    }

    //100 to 81
     int i=100;
    do{
    printf("%d\n",i);
    i--;
    }while(i>=81);


    //factorial of given number
    int number;
    printf("Enter a number for factorial:");
    scanf("%d",&number);

    int f=1;
    for(int i=1;i<=number;i++){
        f=f*i;

    }
     printf("factorial is %d",f);


    //Table of given number
    int num;
    printf("Enter number Of Table :");
    scanf("%d",&num);
    for(int i=num;i<=num*10;i=i+num){
        printf("%d\n",i);
    }


    //Reverse print
    int ber;
    int last=0;
    printf("Enter number to reverse:");
    scanf("%d",&ber);
    while(ber>0){
        last=ber%10;
        printf("%d",last);
        ber=ber/10;
    }

    //Max of given number
    int value;
    int last;
    int max=0;
    printf("Enter a number:");
    scanf("%d",&value);
    while(value>0){
        last=value%10;
        if(last>max){
        max=last;
        value=value/10;
       }
}
    printf(" max is %d",max);

    //summation of given number
    int option;
    int last=0;
    int sum=0;
    printf("Enter a number :");
    scanf("%d",&option);
    while(option>0){
            last=option%10;
            sum=sum+last;
            option=option/10;
    }
    printf("summation of this :%d",sum);


    //summation of first and last number
    int pumber;
    int last;
    int first=0;

    //star pattern 1
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*",i);
        }
        printf("\n");

    }

    //diffrent number pattern

     for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");

    }

    //same number pattern
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");

    }

    //star by left side
     for(int i=1;i<=5;i++){
        for(int k=1;k<=5-i;k++){
            printf(" ",k);
        }
        for(int j=1;j<=i;j++){
            printf("*",i);
        }
        printf("\n");

    }

        //star by left side
     for(int i=1;i<=5;i++){
        for(int k=1;k<=5-i;k++){
            printf(" ",k);
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");

    }

     //star pattern 2
     int count=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",count);
            count++;
        }
        printf("\n");

    }

    //odd amd even logic
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
           if((i+j)%2==0){
            printf("1");
           }else {
               printf("0");
           }
        }
        printf("\n");

    }

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i*i);
        }
        printf("\n");

    }


    int array[]={51,71,82,87,91};
    for(int i=0;i<5;i++){
        printf("%d ",array[i]);
    }

    int arr[5];

    printf("Enter Five Numbers:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Array is : ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    */
    //count of odd and even number










 }
