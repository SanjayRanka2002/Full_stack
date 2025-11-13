#include<stdio.h>
void main(){
    int a=25;
    int b=a;
    int *p=&a;

    printf("address of a is %x\n",&a);
    printf("address of pointer is %x\n ",p);

    a=30;
    printf("a =%d\n",a);
    printf("b =%d\n",b);
    printf("*p =%d\n",*p);

}
