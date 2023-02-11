#include <iostream>
using namespace std;
int counter(char arr[],int size)
{
	int i=0;
	int fq=0;
while(arr[i]!='\0')
{
	fq++;
	i++;
}
return fq;	
}
int word(char arr[])
{
	int count=1;
	for(int i=0;arr[i]!='\0';i++)
	{
		if (arr[i]==' ')
		{
			count++;
		}
	}
	return count;
}
int main ()
{
int size=100;
char arr[size];
cout<<"Enter string value : ";
cin.getline(arr,size);
int count=word(arr);
int fq=counter(arr,size);
fq=fq-(count-1);
double avg=((fq+0.0)/count);
cout<<"You have entered "<<count<<" words"<<endl;
cout<<"The word average is "<<avg<<endl;
system("pause");
return 0;
}

