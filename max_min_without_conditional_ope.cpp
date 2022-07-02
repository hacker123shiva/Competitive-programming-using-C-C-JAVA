#include<bits/stdc++.h>
using namespace std;
void max_min(int num1,int num2)
{int max ,min;
    max=((num1+num2)+abs(num1-num2))/2;
    min=((num1+num2)-abs(num1-num2))/2;
    cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
    return;
}
int main()
{
    int num1,num2;
    cout<<"Input num1 and num2"<<endl;
    cin>>num1>>num2;
    max_min(num1,num2);
    return 0;
}