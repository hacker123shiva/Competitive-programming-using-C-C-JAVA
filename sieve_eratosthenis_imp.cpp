#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    cout<<"Enter value of n: ";
    cin>>n;
    bool *primeset =new bool [101];
    for (int i=2;i<=n;i++)
    primeset[i]=true;
    primeset[1]=false;

    for(int i=2;i<=sqrt(n);i++)
   if(primeset[i]==true)
   {j=i*i;
    while(j<=n)
    {
        primeset[j]=false;
        j=j+i;
    }
   }

   for(int i=1;i<=n;i++)
   cout<<primeset[i]<<" ";
}