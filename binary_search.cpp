#include<bits/stdc++.h>
using namespace std;

int binary_sear(int * arr, int key, int left , int right)
{int mid;
    while(true)
    {mid=(left+right)/2;
if(left>right)
{cout<<"Index not found\n";
    return -1;
}
else if (arr[mid]==key)
return mid;
else if(arr[mid]<key)
left=mid+1;
else if(arr[mid]>key)
right=mid-1;
    }
}
int main()
{
    int arr[7]={2,1,3,5,3,9,0};
    int key;
    cout<<"Enter key value";
    cin>>key;
    cout<<binary_sear(arr,key,0,6);
    return 0;
}

