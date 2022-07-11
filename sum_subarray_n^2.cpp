#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-1,2,4,-3,5,2,-5,2};
    int max_value=0;
    int n=8;
    for(int i=0;i<n;i++)
    {int sum=0;
    for(int j=i;j<n;j++)
    {
        sum+=arr[j];
        max_value=max(max_value,sum);
    }
    }
    cout<<"Max value: "<<max_value;
    return 0;
}