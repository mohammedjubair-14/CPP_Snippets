#include<iostream>
using namespace std;
int main()
{
   int n,sum=0,i,r;
   for(i=100;i<=999;i++)
   {
       n=i;   //153
       while(n>0){
        r=n%10; //3
        sum=sum+(r*r*r);
        n=n/10; //15
       }
       if(sum==i)
       {
           cout<<i<<endl;
       }
       sum=0;
   }
   return 0;
}
