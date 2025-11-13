#include<iostream>
using namespace std;
class parent{
public :
    int n;
    //parent class ka intance variable use
    void myfun(int j){
        n=j;
        cout<< "---- Table is--- "<<endl;
        for(int i=n;i<=n*10;i=i+n){
            cout<<i;

        }

    }
};
//child ko inherit kiya parent class ke saath kyonki n ki value parent se milegi isliye
class child : public parent{
public :
    void second(){
        int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    cout<< "factorial is : "<<f;

    }


};
//child se dono function call kr skte hai but parent se nhi
int main(){
    child c;
    c.myfun(5);
    c.second();

}
