#include<iostream>
using namespace std;
class studentinfo{
    public :
    int rollno;
    string name;
    int marks;
    //function banaya kyonki parameter se instance variables ko access krna hoga
    void priwithfun(int r ,string n ,int m){
        rollno=r;
        name=r;
        marks=m;
    }
    void pri(){
        cout<< " Rollno : "<<rollno<<endl;
        cout<< " Name : "<<name<<endl;
        cout<< " Marks : "<<marks<<endl;
    }
};
int main(){
    //class instance call by default and call with obj.instancevariable
    studentinfo st1;
    st1.rollno=21;
    st1.name="shreeRam";
    st1.marks=50;
    /*
   //print by cout
    cout<<st1.rollno<<endl;
    cout<<st1.name<<endl;
    cout<<st1.marks<<endl;
    */

}
