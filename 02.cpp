#include<iostream>
using namespace std;
class employee
{   
    int ID;
    string name;
    float sal;
    public:
    void datain()
    {
        cout<<"Enter ID: ";
        cin>>ID;
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter salary";
        cin>>sal;

    }
    void dataout()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Id   : " <<ID<<endl;
        cout<<"Salary   :   "<<sal<<endl;


    }

};


int main()
{ int i;
employee e[5];
for(i=0;i<5;i++)
{
    e[i].datain();
}
for(i=0;i<5;i++)
{
    e[i].dataout();
}
return 0;
}