#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-1,2,4,-3,5,2,-5,2};
    int n=8;
    int max_value=0;
    int sum;
    for(int i=0;i<n;i++)
    for(int j=i;j<n;j++)
    {
    {sum=0;
    for(int k=i;k<=j;k++)
    sum+=arr[k];
    }
    max_value=max(sum,max_value);
    }
    cout<<"Max value: "<<max_value;
    return 0;

}