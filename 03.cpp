#include<iostream>
using namespace std;
class Calculus
{
    public:
    int a,b;
    void cal()
    {
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
        cout<<"The value of a+b is "<<a+b<<endl;
        cout<<"The Value of a-b is "<<a-b<<endl;
        cout<<"The value of a*b is "<<a*b<<endl;

    }
    void  cal(int a)
    {
        cout<<"enter number"<<endl;
        cin>>a;
       if(a/2==0)
       {
        cout<<"The Number is even"<<endl;
       }
       else
       {
           cout << "The Number is odd" << endl;
       }
    }
    void cal(int a ,int b)
    {
        cout << "enter number" << endl;
        cin >>a>>b;
        if (a > b)
        {
            cout << "The Greater number is " << a << endl;
        }
        else
        {
            cout << "The Greater number is " << b << endl;
        }
    }

};
int main()
{
    Calculus c1;
    c1.cal();
    c1.cal(0);
    c1.cal(0,0);
    return 0;

}