#include <iostream>
using namespace std;

class emp{
    public:
     string name;
        int id;
        float sal;
    emp(){
       
        cout<<"Enter the name : "<<endl;
        cin>>name;
        cout<<"Enter the id : "<<endl;
        cin>>id;
        cout<<"Enter the salary : "<<endl;
        cin>>sal;

    }
    void out(){
        cout<<"Name : "<<name<<endl;
        cout<<"Id : "<<id<<endl;
        cout<<"Salary : "<<sal<<endl;
    }
};
int main(){
    emp e[3];
    cout<<"Displaying Employee data"<<endl;
    cout<<"Loading.................."<<endl;
    for(int i=0;i<3;i++){
    e[i].out();


}
}