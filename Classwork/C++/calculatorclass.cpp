#include<iostream>
using namespace std;
class calcu{
    public :
    int a,b,sum,sub,mul,div;

    void access(){
        cout<< " Enter first number :";
        cin>>a;
        cout<< " Enter second number : ";
        cin>>b;
    }
    void calculation(){
        sum=a+b;
        sub=a-b;
        div=a*b;
        mul=a/b;
    }
    void pri(){
        cout<< " sum of "<<a<< " & "<<b<< " is : "<<sum<<endl;
         cout<< " sub of "<<a<< " & "<<b<< " is : "<<sub<<endl;
          cout<< " mul of "<<a<< " & "<<b<< " is : "<<mul<<endl;
           cout<< "  div of "<<a<< " & "<<b<< " is : "<<div<<endl;

    }
};

int main(){
    calcu c1;
    c1.access();
    c1.calculation();
    c1.pri();
}
