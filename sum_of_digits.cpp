#include<iostream>
using namespace std;

int main()
{
    int n,num,sum=0;
    cout<<"enter any number:";
    cin>>n;
    while(n!=0)
    {
        num=n%10;
        sum=sum+num;
        n=n/10;
    }
    cout<<"sum of digits is:"<<sum;
}