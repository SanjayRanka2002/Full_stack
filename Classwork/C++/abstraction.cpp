#include<iostream>
using namespace std;
class Branch
{
private :
    int x;
public :
    virtual void base()=0;
    virtual void otherbranch()=0;
};
class Sbi : public Branch
{
public :
    void base(){
        cout<< " fun is calling "<<endl;
    }
    void otherbranch(){
        cout<< " rate of interest is 5%"<<endl;
    }
};
int main(){
    Sbi s;
    s.base();
    s.otherbranch();

}
