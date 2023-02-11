#include <iostream>
using namespace std;
int main ()
{
	system("Color 0A");
char c;
int n;
for (int i=0;i<256;i++)// creates character till the entered number
{
	c=i;
	cout <<i<<" : \t"<<c<<"\t";
	if(i%7==0){
		cout<<endl;
	}
}
repeat:
cout<<"\nEnter Character Whose ascii you want to find : ";
cin>>c;
n=c;
cout<<n;
goto repeat;
system("pause");
return 0;
}
