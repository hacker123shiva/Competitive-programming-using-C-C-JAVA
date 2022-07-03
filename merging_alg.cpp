  #include<bits/stdc++.h>
using namespace std;

void merging(int *arr1, int* arr2, int * arr,int m ,int n)
{
int  i=0 ,j=0,k=0;

 

while(i<m&&j<n)
{
  if(arr1[i]<arr2[j])  
  {
    arr[k]=arr1[i];
    i++;
    k++;
  }

  else
  {
    arr[k]=arr2[j];
    j++;
    k++;
  }
}

while(i<m)
{
    arr[k]=arr[i];
    i++;
    k++;
}

while(j<n)
{
    arr[k]=arr[j];
    j++;
    k++;
}
  
return;
}

int main()
{int *arr;
    int arr1[10]={2,4,5,6,8,8,10,12,15,24};
    int arr2[7]={5,6,9,10,11,13,19};
    merging(arr1,arr2,arr,10,7);
    for(int i=0;i<17;i++)
    {
        cout<<arr[i]<<" ";
    }

return 0;
}