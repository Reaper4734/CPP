#include<iostream>
using namespace std;
class test
{
    public:
    int a,b;
    test()
    {
        cout << "Enter the value of a and b" << endl;
        cin >> a >> b;
        cout<<"a    ="<<a<<"b   ="<<b<<endl;

    }
    void add()
    {
        cout << "The value of a+b is " << a + b << endl;
    }
    test(int a)
    {
        cout<<"this is single argument instructor"<<endl;
    }
};
int main()
{
    test t1;
    test t2(10);
    return 0;
}