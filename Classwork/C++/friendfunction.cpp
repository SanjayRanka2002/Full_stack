#include<iostream>
using namespace std;
class Box{
    double width,height;
public :
    //friend funtion ke bina direct acces nhi krpayenge variables ko
    friend void printwidth(Box box1);
    //member function ko variables use krne ke liye by refrence chahiye hoga class ka
    void setwidth(double wi ,double hi);
};
//referece by class and expand member function
void Box ::setwidth(double wi,double hi){
    width=wi;
    height=hi;

}
//friend function expand (isme hm class  obj ) hai paranthesis hai

void printwidth(Box box1){
    cout<< " Width : "<<box1.width<<endl;
    cout<< " Height : "<<box1.height<<endl;


}
int main(){
    Box box1;
    box1.setwidth(10,59);
    printwidth(box1);
    Box box2;
    box2.setwidth(5,6);
    printwidth(box2);
}
