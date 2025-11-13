#include<stdio.h>
void main(){
int a=5;
int b=2;
int c=a/b;
printf("result is %d\n",c);

float e=(int)5.5;
float f=(int)5.6;
float g=e+f;
printf("result is %.1f\n",g);

float k=(int)5.6;
int l=(float)6;
float m=k+l;
printf("result of %f and %d =%.1f",k,l,m);


}
