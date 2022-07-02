#include<bits/stdc++.h>
using namespace std;
int linear_sear(int arr[],int key)
{
for(int i=0;i<7;i++)
{
    if(arr[i]==key)
    return i;
}
cout<<"Index Not found\n";
return -1;
}

int main()
{
    int arr[7]={2,1,3,5,3,9,0};

    int key;
    cout<<"Enter value of key";
    cin>>key;
    cout<<linear_sear(arr,key);
    return 1;
}