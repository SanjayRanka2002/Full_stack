#include<stdio.h>
float simpleinterest(float p ,float r, float t){
    printf("enter principal amount: ");
    scanf("%f",&p);
    printf("enter  rate: ");
    scanf("%f",&r);
    printf("enter time: ");
    scanf("%f",&t);
    float si=(p*r*t)/100;
    float amount=p+si;

    printf("SI :%.1f\n",si);
    printf("Total :%.1f",amount);




}
int main(){
    /*
  char c;
  int menu,Amount;
  float p,r,t,SI;

  do{
    printf("1.Simple Interest\n");
    printf("2.Amount\n");
    printf("3.Exit\n");

    printf("Enter a number you want perform that action:");
    scanf("%d",&menu);

    switch(menu){

            case 1:
                 printf("You Want to Action simple interest:\n");
                 printf("Enter principal amount :");
                 scanf("%f",&p);
                 printf("Enter rate like n that is define as n% :");
                 scanf("%f",&r);
                 printf("Enter Time :");
                 scanf("%f",&t);

                 SI=(p*r*t)/100;
                 printf("Simple interest is :%.1f\n",SI);
            break;
            case 2:
                Amount=p+SI;
                printf("Total Amount is:%.1f\n",Amount);
            break;
            case 3:
                break;
            default :
                printf("Enter Valid input:\n");
                break;
    }
    printf("If you Want to continue:");
    scanf(" %c",&c);

  }while(c =='y' || c =='Y');



float p,r,t,si;
 p=500;
 r=5;

printf("For simple interest :\n");
for(int i=1;i<=5;i++){
    printf("Enter time:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("si is :%.1f\n",si);
}
*/
float p,r,t;
simpleinterest(p,r,t);
return 0;


}
