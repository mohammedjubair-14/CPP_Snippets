#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,temp;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the values"<<endl;
        cin>>a[i];
    }
    temp=a[0];
    for(i=1;i<n;i++)
    {
        if(temp>a[i])
            temp=a[i];
    }
    cout<<"Smallest element in a array"<<temp<<endl;
    return 0;
}
