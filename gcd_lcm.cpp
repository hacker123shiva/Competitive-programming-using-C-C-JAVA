#include<bits/stdc++.h>
using namespace std;
int hcf_find(int num1,int num2)
{
  int greater , smaller,num3;
  greater=num1>num2?num1:num2;
  smaller=num1<num2?num1:num2;
  
  while(true)
  {num3=greater%smaller;
  if(num3==0)
  return smaller;
  greater=smaller; 
  smaller=num3;
  }
  } 

int lcm_find (int num1, int num2)
{
int hcf=hcf_find(num1,num2);
int lcm;
lcm=num1*num2/hcf;
return lcm;
}
  
  

 
int main()
{
int num1 ,num2;
cout<<"Enter num1 and num2: ";
cin>>num1>>num2;
cout<<"HCF: "<<hcf_find(num1,num2)<<endl;
cout<<"LCM: "<<lcm_find(num1,num2);
return 0;
}