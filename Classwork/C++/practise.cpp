#include<iostream>
using namespace std;
int main()
{
    int s;
    for(int i=1;i<=3;i++)
    {
        cout<< " 1) Man "<<endl;
         cout<< " 2) gMan "<<endl;
          cout<< " 3) hMan "<<endl;
          cout<< "selet one : ";
          cin>>s;

          switch(s)
          {
          case 1:
            cout<< "select 1 "<<endl;
            break;
         case 2:
            cout<< "select 2 "<<endl;
            break;
         case 3:
            cout<< "select 3 "<<endl;
            break;

          }
    }
}
