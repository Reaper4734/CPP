#include<iostream>
using namespace std;
class shop
{
    float gst=0.18;
   public:
   int a,b;
   void order()
   {
    cout<<"Enter  the price of the item:";
    cin>>a;
   }
   void bill()
   { float total=a+(a*gst);
     cout<<"Your total bill is"<<total<<endl;
   }

    friend shop bro (shop obj);
};
 shop bro(shop obj)
{ 
    obj.gst=0.12;
    cout<<"The GST Rate has been changed to 12%"<<endl;
    obj.order();
    obj.bill();

};
int main()
{
    shop a;
    a.order();
    a.bill();
    bro(a);
    return 0;

    

}