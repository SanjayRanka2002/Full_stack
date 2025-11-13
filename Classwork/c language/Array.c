#include<stdio.h>
void main(){
    int number,count;
    printf("Enter a number :");
    scanf("%d",&number);
    int notes[]={2000,1000,500,200,100,50,20,10};

    for(int i=0;i<=7;i++){
        count=number/notes[i];
        printf("%d : %d\n",notes[i],count);
        number=number%notes[i];

    }



}
