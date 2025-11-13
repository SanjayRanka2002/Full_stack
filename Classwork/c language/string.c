#include<stdio.h>
void main(){
    char k[10]="sanjay";
    char s[10]="Ranka";

    printf("%s",k);
    printf("\n%s",s);

    strcat(k,s);
    printf("\n%s",k);
}
