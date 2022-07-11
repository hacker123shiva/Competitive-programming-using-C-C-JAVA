#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-1,2,4,-3,5,2,-5,2};
    int sum=0;
    int max_value=0;
    int n=8;
    for(int i=0;i<n;i++)
    {sum=max(arr[i],sum+arr[i]);
    max_value=max(sum,max_value);
    }

    cout<<"Max value: "<<max_value;
    return 0;
}