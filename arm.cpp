#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int num,cnt=0,rem,digit;
cout<<"Enter Number";
cin>>num;
cnt=0;
while(num!=0)
{
cnt++;
num=num/10;
}
digit=cnt;
while(num!=0){
rem=num%10;
sum+=pow(rem,digit);
num/=10;
}
if(sum==num)
cout<<"Number is Armstrong:";
else
cout<<"Number is not:";
}

