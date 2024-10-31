#include<iostream>
using namespace std;
class test
{
    public:
    int a;
    static int b;
    void input()
    {
        cout<<"Enter the value of w b: "<<endl;
        cin>>b;
    }
    static void output()
    {
        cout <<"The value of b is: "<<b<<endl;
    }
    inline void oddeven(int no)
    {
        (no % 2 == 0) ? cout << "number is even" << endl : cout << "number is odd" << endl;
    }
};
int test::b=0;
int main()
{
    test t1,t2;
    t1.input();
    t2.input();
    t1.output();
    t2.output();
    t2.oddeven(10);
    return 0;

}