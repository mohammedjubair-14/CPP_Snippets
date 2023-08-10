#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,20,30,0,0};
    int b[]={23,34,5,67,8};
    for(int x:a)
        cout<<x<<endl;
    cout<<"--------------------"<<endl;
    for(int y:b)
        cout<<y<<endl;
        cout<<"Count"<<sizeof(a)/sizeof(int)<<endl;
        cout<<"Count"<<sizeof(b)/sizeof(int)<<endl;
    return 0;

}

