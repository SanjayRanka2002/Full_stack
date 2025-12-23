#include<iostream>
using namespace std;
class student
{
    public:
        int a,b;

    void show()
    {

       cout<<"sum is :"<<a+b;


    }

};
int main()
{
   student s1;
   cout<<" Enter first element : ";
   cin>>s1.a;
   cout<<" Enter second element : ";
   cin>>s1.b;
    s1.show();


}
