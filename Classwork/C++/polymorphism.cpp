#include<iostream>
using namespace std;
class sum{
    //compile time polymorphism
    //example - method overloading means funname same parameter type same but multiple

public :
    void calculate( int a,int b){
        cout<< " sum is : "<<a+b<<endl;

    }
    void calculate( int a,int b ,int c){
        cout<< " sum is : "<<a+b+c<<endl;

    }
    void calculate( int a,int b,int c,int d){
        cout<< " sum is : "<<a+b+c+d<<endl;

    }

    };
    //run time
    //method overriding ke liye
    //method overriding means

    class sci : public sum{
        public :
        int calculate(int a,int b){
            cout<< "sum of "<<a<< " and "<<b<<" is : "<<a+b;
        }

    };


    int main(){
        //konsa function kab kaam krega ye argument kitne pass kr rhe ho uske hisab se
        sum s;
        s.calculate(4,7);
        s.calculate(5,8,1);
        //method over riding means fun same but jiska object ka call vo print

        sci c;
        c.calculate(9,6);

    }
