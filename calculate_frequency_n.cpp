#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,2,3,3,53,5,2,44,2,2,34,2,35,99,34,34,2,4,24,2,44,24,33,3,3,34,4,2,43,2};
    int n=sizeof(arr)/4;
    int freq[50]={0};
    for(int i=0;i<n;i++)
    freq[arr[i]]++;

    for(int i=0;i<50;i++)
    cout<<i <<"th pos: "<<freq[i]<<", ";
    return 0;
}