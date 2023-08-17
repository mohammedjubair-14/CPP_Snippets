#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,sum=0;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the values"<<endl;
        cin>>a[i];

    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Total value"<<sum<<endl;












    return 0;
}

