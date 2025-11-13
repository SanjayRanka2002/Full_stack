#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[20];
    float percent;
};
int main(){
    struct student s[3];
    for(int i=0;i<3;i++){
        printf("Enter Your Roll no :");
        scanf("%d",&s[i].rollno);
        printf("Enter Your Name :");
        scanf("%s",&s[i].name);
        printf("Enter Your Percent :");
        scanf("%f",&s[i].percent);

    }
    for(int j=0;j<3;j++){
    printf("Roll no : %d\n",s[j].rollno);
    printf("Name  : %s\n",s[j].name);
    printf("percent : %f\n",s[j].percent);
    }
}
