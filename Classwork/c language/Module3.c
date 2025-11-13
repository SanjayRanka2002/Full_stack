#include<stdio.h>
void main(){
    //Question 1
    //First Type

    int a,b;
    int operate;

    printf("Enter Two Numbers :");
    scanf("%d%d",&a,&b);

    printf("Sum of %d and %d is : %d",a,b,a+b);
    printf("\nSub of %d and %d is : %d",a,b,a-b);
    printf("\nmul of %d and %d is : %d",a,b,a*b);
    if(b==0){
        printf("infinite");
    }else {
        printf("\nDiv of %d and %d is : %d",a,b,a/b);
    }

    //Type 2

    printf(" +  :  sum\n");
    printf(" -  :  sub\n");
    printf(" *  :  mul\n");
    printf(" /  :  div\n");

    printf("Enter First Number :");
    scanf("%d",&a);
    printf("Enter Operator :");
    scanf(" %c",&operate);
    printf("Enter Second Number :");
    scanf("%d",&b);

    switch(operate){
        case '+' :
         printf("sum of %d and %d is : %d",a,b,a+b);
         break;

        case '-' :
        printf("sub of %d and %d is : %d",a,b,a-b);
        break;

        case '*':
        printf("mul of %d and %d is : %d",a,b,a*b);
        break;

        case '/':
         if(b==0){
            printf("infinite ");

         }else {
             printf("div of %d and %d is : %d",a,b,a/b);
         }
         break;

        default :
            printf("Enter Correct operator");

    }


    //Question 2
    int number;
    printf("Enter a number :");
    scanf("%d",&number);

    int find =(number%2==0)? "even\n":"odd\n";
    printf(find);


    if(number%5==0 && number%3==0){
        printf("multiple of 3 and 5\n");
    }else {
        printf("Not Multiple\n ");
    }

    if(number==0){
        printf("zero");
    }else if (number>0){
        printf("Positive number\n");
    }else {
        printf("Negative number\n");
    }

    //Question 3
    //Type 1
    int marks;
    printf("Enter Your Marks :");
    scanf("%d",&marks);

    if(marks>90){
        printf("A Grade");
    }else if(marks>75 && marks<=90){
        printf("B Grade");
    }else if(marks>50 && marks<=75){
        printf("C Grade");
    }else if (marks<=50){
        printf("D Grade");
    }

    //Type 2
    int number;
     printf("Enter Your Marks :");
    scanf("%d",&number);
    int value=number/10;

    switch(value){
    case 10 :
    case 9 :
        printf("Grade A\n");
        break;
    case 8 :
        printf("Grade B\n");
        break;
    case 7 :
        printf("Grade C\n");
        break;
    case 6 :
        printf("Grade D\n");
        break;
    case 5 :
        printf("Grade E\n");
        break;
    case 4 :
        printf("Grade F\n");
        break;
    case 3 :
        printf("Fail\n");
        break;

    default :
        printf("NO Grade\n");

    }



        //Question 5
     int prime;
     printf("Enter number to check prime :");
     scanf("%d",&prime);

    int i=2;
     while(n<=i){
        if(n%i==0 && i%2==0){
            printf("Not prime number");
        }else {
            printf("%d",i);
            i++;
        }

     }

     //Question 4
     int a,b,c;
        printf("Enter  Three Numbers :");
        scanf("%d%d%d",&a,&b,&c);

     if(a>b && a>c){
        printf("Largest is %d\n",a);
     }else if(b>c && b>a){
        printf("Largest is %d\n",b);
     }else {
         printf("Largest is %d\n",c);
     }

      if(a<b && a<c){
        printf("Smallest is %d\n",a);
     }else if(b<c && b<a){
        printf("Smallest is %d\n",b);
     }else {
         printf("Smallest is %d\n",c);
     }
        //Type 2


    //Question 6
    int n,range;
    printf("Enter a number Want a Table :");
    scanf("%d",&n);
    printf("Enter a range Want a Table :");
    scanf("\n%d",&range);

    for(int i=n;i<=n*range;i=i+n){
        printf("%d\n",i);
    }


    //Question 7
    //Type 1
    int lastdigit;
    int sum=0;
    int mynumber,rev;
    printf("Enter a Number :");
    scanf("%d",&mynumber);
    while(mynumber>0){
        lastdigit=mynumber%10;
        sum=sum+lastdigit;
        mynumber=mynumber/10;
    }
    printf("Sum is :%d\n",sum);

         //Type 2
    printf("Enter a Number Want To reverse :");
    scanf("%d",&mynumber);
    while(mynumber>0){
        lastdigit=mynumber%10;
        printf("%d",lastdigit);
        mynumber=mynumber/10;
    }



    //Question 8
    //Type 1
    int arr[5];
    int ran;
    int min=arr[0];
    int max=arr[0];
    printf("Enter  range of array :");
    scanf("%d",&ran);
    printf("Enter  Five number : \n");


    for(int i=1;i<=ran;i++){
        scanf("%d",&arr[i]);
    }


    for(int i=1;i<=ran;i++){
        if(arr[i]>max){
            max=arr[i];

        }

        if(arr[i]<min){
            min = arr[i];

        }


    }

    printf("Max is : %d",max);
    printf("\nMin is : %d",min);


    //Type 2
    int range;
    printf("Enter a number of array range :");
    scanf("%d",&range);

    int array[range];



    printf("Enter number of that u give a size of array :");
    for(int i=0;i<range;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<range-1;i++){
        for(int j=0;j<range-i-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }


    printf("Sorted array is :\n");
    for(int i=0;i<range;i++){
        printf("%d",array[i]);
    }



//Question 9
//Type 1
int n;
printf("enter a number like nxn matrics :");
scanf("%d",&n);
int ar[n][n];
int sum=0;
printf("Enter a number you want to display as type of matrics:");

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        scanf("%d",&ar[i][j]);
    }
    printf("\n");
}

printf("Resultant matrics is :");
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        sum=sum+ar[i][j];
    }

}
printf("Resultant is :%d",sum);


        //Type 2

int k;
printf("enter a number like nxn matrics :");
scanf("%d",&k);
int arey[k][k];
int mul=1;
printf("Enter a number you want to display as type of matrics:");

for(int i=1;i<=k;i++){
    for(int j=1;j<=k;j++){
        scanf("%d",&arey[i][j]);
    }
    printf("\n");
}

printf("Resultant matrics is :");
for(int i=1;i<=k;i++){
    for(int j=1;j<=k;j++){
        mul=mul*arey[i][j];
    }

}
printf("Resultant is :%d",mul);



//Fibonacci series
int n,t1=0,t2=1,next;

printf("Enter a range:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d ",t1);
    next=t1+t2;
    t1=t2;
    t2=next;
}



}
