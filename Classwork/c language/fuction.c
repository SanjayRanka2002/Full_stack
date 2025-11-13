#include<stdio.h>
int main () {
   printf("1. Basketball \n");
    printf("2. vollyball \n");
    printf("3. running \n");
    int k;
    printf("Enter a number to choose :");
    scanf("%d",&k);
    switch(k){
    case 1:
        printf("Basketball");
        break;
    case 2:
        printf("Volly ball");
        break;
    case 3:
        printf("running");
        break;
    default :
        printf("Invalid number");
    }


return 0;
}
