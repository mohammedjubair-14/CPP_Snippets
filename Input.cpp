#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the integer value:"<<endl;
    cin>>a;
    cout<<"Integer value:"<<a<<endl;

    float b;
    cout<<"Enter the float value:"<<endl;
    cin>>b;
    cout<<"Float Value:"<<b<<endl;


    char c;
    cout<<"Enter the character value:"<<endl;
    cin>>c;
    cout<<"Character Value:"<<c<<endl;



    string d;
    cout<<"Enter the string:";
    getline(cin,d);
    cout<<d;


    return 0;
}
