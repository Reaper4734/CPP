#include <iostream>
using  namespace std;
class students
{
    int  roll;
    int maths;
    int sci;
    int eng;
    string name;
    public:
    float total;
    float per;

    void datain()
    {
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks for  maths: ";
        cin>>maths;
        if(maths<0||maths>100)
        {
            cout<<"Invalid marks for maths. Please enter marks between 0 and 100.";
        }
        
        cout<<"Enter marks for  science: ";
        cin>>sci;
        if(sci<0 || sci>100)
        {
            cout << "Invalid marks for Science. Please enter marks between 0 and 100.";
        }    

            cout << "Enter marks for  english: ";
            cin >> eng;
            if(eng<0||eng>100)
            {
                cout << "Invalid marks for English. Please enter marks between 0 and 100.";
            }
            total = maths + sci + eng;
            per = (total / 300) * 100;
        }
    void dataout()
    {
        cout<<"Roll number:         :"<<roll<<endl;
        cout<<"Name of Students     :"<<name<<endl;
        if(maths<35)
        {
            cout << "Marks for maths      :" << maths<<"*"<< endl;
        }else
        {
            cout << "Marks for maths      :" << maths << endl;
        }   
        if(sci<35)
        {
            cout << "Marks for science    :" << sci <<"*"<< endl;
        }
        else
        {
            cout << "Marks for science    :" << sci << endl;
        }
       if(eng<35) 
        {
            cout << "Marks for English    :" << eng << "*" << endl;
        }
        else
        {
            cout << "Marks for english    :" << eng << endl;
        }
        cout << "Total Marks:       :"<< total << endl;
        cout << "Percentage         :"<< per<< "%" << endl;

    }
    void grade()
    {
        if (maths < 35)
        {
            cout << "FAILED IN MATHS" << endl;
        }
        if (sci < 35)
        {
            cout << "FAILED IN SCIENCE" << endl;
        }
        if (eng < 35)
        {
            cout << "FAILED IN ENGLISH" << endl;
        }
        if (maths < 35||sci<35||eng<35)
        {
            cout << "FAILED" << endl;
            return; 
        }

        if(per>=35&&per<55)
        {
            cout<<"Grade C "<<endl;
            cout<<"PASS"<<endl;

        }
        if(per>=55&&per<85)
        {
            cout<<"Grade B "<<endl;
            cout<<"PASS"<<endl;
        }
        if(per>=85)
        {
            cout<<"Grade A "<<endl;
            cout<<"PASS"<<endl;
        }
     
    }

};
int main()
{   int i;
    students s1;
    for ( i=0;i<3;i++)
   
    {
    s1.datain();
    s1.dataout();
    s1.grade();
    }
    return 0;   
}
