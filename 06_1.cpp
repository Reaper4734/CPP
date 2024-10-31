#include <iostream>
#include <fstream>
using namespace std;

int main()
{string text;
ofstream fout;
fout.open("FOff.txt");
cout<<"Enter some text"<<endl;
while(fout)
{
    getline(cin,text);
    if (text=="exit");
    {
        break;
    }
    fout<<text<<endl;

}

    
}