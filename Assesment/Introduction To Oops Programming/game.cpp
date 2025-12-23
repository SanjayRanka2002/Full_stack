#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
class game
{
public :
    int r,user,round,computer,uscore,cscore;
    string name;
    char k;
    void mygame()
    {

        do
        {
             uscore=0,cscore=0;

            cout<< " ------- Name------------ "<<endl;
            cout<< " Enter your Name : ";
            cin>>name;

            cout<< " ------- Round------------ "<<endl;
            cout<<name<< " How many rounds to play ? : ";
            cin>>r;

            cout<< " -------Game------ "<<endl;
             srand(time(0));
            for(int i=1;i<=r;i++)
            {
                 computer=(rand()%3)+1;
                cout<< " Round no : "<<" "<<i<<"/"<<r<<endl;
                cout<<name<< " score "<< " = "<<uscore<<endl;
                cout<< " computer score "<< " = "<<cscore<<endl;


                cout<< " 1) Rock "<<endl;
                cout<< " 2) Paper "<<endl;
                cout<< " 3) Scissor "<<endl;


                  cout<< "select your choice : ";
                  cin>>user;
                  cout<< "computer choice is : "<<computer<<endl;
                switch(user)
                {

                cout<< " computer choice is : "<<computer<<endl;

                case 1:
                   if(user==computer)
                   {
                       cout<< " Draw "<<endl;
                   }
                    else if ((user == 1 && computer == 3) ||
                      (user == 2 && computer== 1) ||
                        (user == 3 && computer == 2))
                    {
                    uscore++;
                    }

                  else
                  {
                    cscore++;
                  }

                  break;
                case 2:
                   if(user==computer)
                   {
                       cout<< " Draw "<<endl;
                   }
                    else if ((user == 1 && computer == 3) ||
                      (user == 2 && computer == 1) ||
                        (user == 3 && computer == 2))
                    {
                    uscore++;
                    }

                  else
                  {
                    cscore++;
                  }

                  break;
                case 3:
                   if(user==computer)
                   {
                       cout<< " Draw "<<endl;
                   }
                    else if ((user == 1 && computer == 3) ||
                      (user == 2 && computer == 1) ||
                        (user == 3 && computer == 2))
                    {
                    uscore++;
                    }

                  else
                  {
                    cscore++;
                  }

                  break;
                default :
                    break;
                }



            cout<< "Total score user : "<< uscore<<endl;
            cout<< "Total score computer : "<<cscore<<endl;

            if(uscore>cscore)
            {

                cout<< "user win "<<endl;
            }
            else if(cscore>uscore)
            {

                cout<< "computer win "<<endl;
            }
            else
            {
                cout<< " Draw "<<endl;
            }
            }
            cout<< " if you want to play again (y/n)? ";
            cin>>k;
        }while(k =='y' || k=='Y');
    }
};
int main()
{
    game g;
    g.mygame();
}
