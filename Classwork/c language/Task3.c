#include<stdio.h>
void main(){
    int n;
    printf("Enter a range :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            if(i==3){
            continue;
        }
        printf("%d\n",i);

    }
}
