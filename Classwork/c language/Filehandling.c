#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("my.txt","w");
    fprintf(fp,"sanjay \n");
    fprintf(fp,"shree ram \n");
    printf(" Name Added ");
    fclose(fp);
    return 0;
}
