#include<iostream>
using namespace std;
class uni
{
    public:
    int ID,a,b;
    float sal;
    string name;
    void IN_data()
    {

        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter name";
        cin >> name;
        cout << "Enter salary";
        cin >> sal;
    }


    void OUT_data()
    {
        cout << "Name : " << name << endl;
        cout << "Id   : " << ID << endl;
        cout << "Salary   :   " << sal << endl;
    }
};

class sale : public uni
{ public:
    void sales()
    {
        cout << "Enter sales Target  :   " << endl;
        cin >> a;
        cout << "Enter sales Achieved  :   " << endl;
        cin >> b;
        cout << " Sales Pending" << a - b << endl;
    }
};
class market : public sale
{ public:
    void mark()
    {
        cout<<"Enter client assigned"<<endl;
        cin>>a;
        cout<<"Enter client visited"<<endl;
        cin>>b;
        cout<<"Client not assigned"<<a-b<<endl;

    }
};

int main()
{
    uni a;
    a.IN_data();
    a.OUT_data();

    sale b;
    b.sales();

    market c;
    c.mark();

    
    


    return 0;
    

}