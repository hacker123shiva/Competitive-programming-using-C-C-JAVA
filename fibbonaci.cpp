#include<bits/stdc++.h>
using namespace std;

void print_fibbonaci(int term)
{
    int a ,b ,temp;
    
    cout<<"fibonnaci sequence: "<<0 <<" "<<1<<" ";
    for(int i=2;i<=term;i++)
{
    cout<<a+b<<" ";
    temp=a;
    a=b;
    b=a+temp;
}
}

int main()
{
    int term;
    cout<<"Enter value of term: ";
    cin>>term;
    print_fibbonaci(term);

return 0;


}