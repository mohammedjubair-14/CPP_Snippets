#include<iostream>
using namespace std;
class student
{

private:
    string name;
    int m1,m2,m3;
    float avg,tot;

public:

    void getdata()
    {
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter three marks:"<<endl;
        cin>>m1>>m2>>m3;
        tot=m1+m2+m3;
        avg=tot/3;
    }

   void display();
};

void student::display()
{

    cout<<"name : "<<name<<endl;
    cout<<"Mark 1 :"<<m1<<endl;
    cout<<"Mark 2 :"<<m2<<endl;
    cout<<"Mark 3 :"<<m3<<endl;
    cout<<"Total :"<<tot<<endl;
    cout<<"Average :"<<avg<<endl;

}


int main()
{

    student s;
    s.getdata();
    s.display();
    return 0;


}
