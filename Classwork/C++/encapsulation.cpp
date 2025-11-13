#include<iostream>
using namespace std;
class info{
    //encapsulation main instance varibles ko privately use krna hota hai
    private : // private instance bnaye hmne
        int rollno;
        string name;
        string city;
        //isko use krna hota hai instance ko public use krna hoga
    public :
        //instance varibles ko privately use kiye
        void setvalue(int roll){
            rollno=roll;
        }
        int getvalue(){
            return rollno;
        }
         void setname(string n){
            name = n;
        }
        string getname(){
            return name;
        }
         void setcity(string c){
            city=c;
        }
        string getcity(){
            return city;
        }

};
int main(){
    info inf;
    inf.setvalue(22);
    inf.setname(" Sanjay");
    inf.setcity(" Bilara");
    cout<<inf.getvalue()<<endl;
    cout<<inf.getname()<<endl;
    cout<<inf.getcity()<<endl;
}

