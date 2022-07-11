#include<bits/stdc++.h>
using namespace std;
int main()
{string name;
char arrs[5]="shiv";
    int arr[7]={1,2,3,4,5,6,7};
    int temp;
    for(int i=0;i<7/2;i++)
    { 
        temp=arr[i];
        arr[i]=arr[7-i-1];
        arr[7-i-1]=temp;
    }
    for(auto x: arr)
    cout<<x<<" ";
    // getline(cin,arrs);
    cin>>arrs;
    cout<<sizeof(arrs);
    cout<<arrs[4];
    return 0;
}