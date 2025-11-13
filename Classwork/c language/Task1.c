#include<stdio.h>
void main(){
    printf("1.   Maruti\n");
    printf("2.   BMW\n");
    printf("3.   Audi\n");

    int select,modal;
    char c;
    printf("Welcom To Our Showroom,Pls Select a car modal and Relevent Modal:");
    scanf("%d",&select);

    switch(select){
    case 1:
        printf("You Choose Maruti Modal\n");
        printf("If You Want To See Relevent Modal:(Y/N)?");
        scanf(" %c",&c);
        if(c=='Y' || c=='y'){
            printf("1.  Maruti800\n");
            printf("2.  Maruti900\n");
            printf("3.  Maruti1000\n");

            printf("Pls select an option to get modal price\n");
            scanf("%d",&modal);

            switch(modal){
            case 1:
                printf("Maruti800 Price is 25000\n");
                break;
            case 2:
                printf("Maruti900 Price is 30000\n");
                break;
            case 3:
                printf("Maruti1000 Price is 35000\n");
                break;
            default:
                    printf("You enter incorrect Modal\n");
            }
        }else{
            printf("-----Thankyu-----\n");
        }
        break;
    case 2:
        printf("You Choose Bmw Modal\n");
        printf("If You Want To See Relevent Modal:(Y/N)?");
        scanf(" %c",&c);
        if(c=='Y' || c=='y'){
            printf("1.  BMW200\n");
            printf("2.  BMW300\n");
            printf("3.  BMW400\n");

            printf("Pls select an option to get modal prise\n");
            scanf("%d",&modal);

            switch(modal){
            case 1:
                printf("BMW200 Price is 50000\n");
                break;
            case 2:
                printf("BMW300 Price is 60000\n");
                break;
            case 3:
                printf("BMW Price is 70000\n");
                break;
            default:
                    printf("You enter incorrect Modal\n");
            }
        }else{
            printf("-----Thankyu-----\n");
        }
        break;
    case 3:
        printf("You Choose Audi Modal\n");
        printf("If You Want To See Relevent Modal:(Y/N)?");
        scanf(" %c",&c);
        if(c=='Y' || c=='y'){
            printf("1.  Audi005\n");
            printf("2.  Audi006\n");
            printf("3.  Audi007\n");

            printf("Pls select an option to get modal prise\n");
            scanf("%d",&modal);

            switch(modal){
            case 1:
                printf("Audi005 Price is 100000\n");
                break;
            case 2:
                printf("Audi006 Price is 150000\n");
                break;
            case 3:
                printf("Audi007 Price is 200000\n");
                break;
            default:
                    printf("You enter incorrect Modal\n");
            }
        }else{
            printf("-----Thankyu---\n");
        }
        break;


            default:
                printf("You Choose Invalid Modal !!");
    }

}
