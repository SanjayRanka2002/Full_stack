#include<iostream>
using namespace std;
class calculator{
    public:
    int a,b;
    int sum,sub,mul,div;

    void insert1(){


        cout<<" Enter a two values : ";
        cin>>a;
        cin>>b;
        calculation();



    }
    void calculation(){
        sum=a+b;
        sub=a-b;
        mul=a*b;
        div=a/b;

    }
    void show(){

         cout<< " addition is : "<<sum<<endl;
         cout<< " substraction is : "<<sub<<endl;
         cout<< " multipication is : "<<mul<<endl;
         cout<< " dividation is : "<<div<<endl;
    }

};
int main(){
    calculator c1,c2;
   // std1.rollno=101;
   // std2.rollno=102;

    //cout<<std1.rollno;
    //cout<<std2.rollno;

   c1.insert1();
   c1.show();



    return 0;

}
