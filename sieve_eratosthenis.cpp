#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
int i=1,j;
cout<<"Enter value of n: ";
cin>>n;
    bool primeset[n+1];
   for(auto &x : primeset)
   x=true;
   primeset[0]=false;
   primeset[1]=false;
   for(i=2;i<=n;i++)
   {if(primeset[i]==true)
   {j=2;
   while(i*j<=n)
   {
    primeset[i*j]=false;
    j++;
   }}
   }
   for(int i=1;i<=n;i++)
   cout<<primeset[i]<<" ";

   return 0;
   

}