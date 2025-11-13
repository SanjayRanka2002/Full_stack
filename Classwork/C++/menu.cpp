#include<iostream>
using namespace std;
int main(){
    int quantity,price,total,ask,itemprice;
    char ch;
      cout<< " 1.   Pizza=   200rs/plate"<<endl;
      cout<< " 2.   Samosa=   25rs/plate"<<endl;
      cout<< " 3.   Bread-Pakoda=   30rs/plate"<<endl;
      cout<< " 4.   Coffee=   50rs/glass"<<endl;
      cout<< " 5.   Milk-shake=   100rs/glass"<<endl;



      do{
             cout<< " Enter a digit you want : ";
             cin>>ask;
            switch(ask){

            case 1:
                price=200;

                cout<< "  You Select Pizza  "<<endl;
                cout<< "  Enter a Quality : ";
                cin>>quantity;
                 itemprice=(price*quantity);
                total=total+itemprice;
                cout<< "Price : "<<itemprice<<endl;
                cout<< " Total price : "<<total<<endl;
                break;
                 case 2:
                price=25;
                cout<< "  You Select Samosa  "<<endl;
                cout<< "  Enter a Quality : ";
                cin>>quantity;
                itemprice=(price*quantity);
                total=total+itemprice;
                cout<< "Price : "<<itemprice<<endl;
                cout<< " Total price : "<<total<<endl;
                break;
                 case 3:
                price=30;


                cout<< "  You Select Bread-pakoda  "<<endl;
                cout<< "  Enter a Quality : ";
                cin>>quantity;
                itemprice=(price*quantity);
                total=total+itemprice;
                cout<< "Price : "<<itemprice<<endl;
                cout<< " Total price : "<<total<<endl;
                break;
                 case 4:
                price=50;
                itemprice=(price*quantity);
                cout<< "  You Select Coffee  "<<endl;
                cout<< "  Enter a Quality : ";
                cin>>quantity;
                total=total+itemprice;
                cout<< "Price : "<<itemprice<<endl;
                cout<< " Total price : "<<total<<endl;
                break;
                 case 5:
                price=100;
                cout<< "  You Select Milk-Shake  "<<endl;
                cout<< "  Enter a Quality : ";
                cin>>quantity;
                itemprice=(price*quantity);
                total=total+itemprice;
                cout<< "Price : "<<itemprice<<endl;
                cout<< " Total price : "<<total<<endl;
                break;
                 default:
                    cout<< " You Enter Wrong Alternative number : "<<endl;

            }
            cout<< " If You Want To Choose more (Y/N) ";
            cin>>ch;

      }while(ch =='Y' || ch =='y');

}
