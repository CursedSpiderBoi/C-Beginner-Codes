#include<iostream>
using namespace std;
int main(){
int a[10],n,i;
cout<<"enter decimal no.: ";
cin>>n;
for (i=0;n>0;i++)
{
a[i]=(int)n%2;
n=n/2;
}
cout<<"Binary value: ";
for (i=i-1;i>=0;i--)
{
cout<<a[i];
}
cout<<endl;
system("pause");
return 0;
}
