#include<iostream>
using namespace std;
class Bankinfo{
public :
    //public ke niche likne se instance varibles publically use hote hai or public ke upr likne se privatly
    int employeeid;
    string employeename;
    string employeecity;

    //constructor banane ke liye _--> class name(){};
    //ye default constructor hai or constructor call hoga by making object only
    Bankinfo(){
        cout<< " Default constructor ";
    }

    Bankinfo(int id,string name,string city){
        employeeid=id;
        employeename=name;
        employeecity=city;
    }
    void priconparameter(){
        cout<< " Id : "<<employeeid<<endl;
        cout<< " Name : "<<employeename<<endl;
        cout<< " City : "<<employeecity<<endl;


    }



};
int main(){
    //constructor call by object only not obj.fundtion();
    // Bankinfo b1;
    //constuctor by parameter
    Bankinfo b1(1,"SreeRam","Jodhpur");
    b1.priconparameter();
}
