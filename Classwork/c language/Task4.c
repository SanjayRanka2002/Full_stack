#include<stdio.h>
void main(){
    //Array Ke Tasks
    //array make
    int array[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d =%d\n",i,array[i]);
    }
    //index check
    int a[]={1,2,4,6,8,9};
    int key=3;
    for(int i=0;i<6;i++){
     if(a[i]==key){
            printf("Key Exist in Array\n");
     }
    }

    //sum of array
    int arr[5];
    int sum=0;
    printf("Enter 5 number to make array of five\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);


    }

    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
        sum=sum+arr[i];

    }
     printf("\n");
    printf("sum of array is:%d\n",sum);

    //odd number print
    int odd[10];
    printf("Enter 10 Number to Print Only Odd");

    for(int i=0;i<10;i++){
        scanf("%d",&odd[i]);
    }

    for(int i=0;i<10;i++){
        if(!(odd[i]%2==0)){
            printf("%d",odd[i]);
        }
    }
}
