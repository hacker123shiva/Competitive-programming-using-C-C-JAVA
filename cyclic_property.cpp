#include<bits/stdc++.h>
using namespace std;
void fun(char ch)
{ch=69;
    for(ch=1;ch<128;ch++)
    {
        cout<<ch;
    }
cout<<ch;
    return;
}

int main()
{
    char ch;
    cout<<"Input the charcter ch";
    cin>>ch;
    fun(ch);
    return 0;
}
