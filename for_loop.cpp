#include<iostream>
using namespace std;
int main()
{
    int i,n,t;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    cout<<"Enter the table"<<endl;
    cin>>t;
    for(i=1;i<=n;i++)
    {
        cout<<t<<"*"<<i<<"="<<t*i<<endl;

    }
    return 0;

}
