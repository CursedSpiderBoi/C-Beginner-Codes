#include <iostream>
using namespace std;
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
int size=100,fq=0;
char arr[size];
cout<<"Enter string value : ";
cin.getline(arr,size);
int count=word(arr);
cout<<"You have entered "<<count<<" words"<<endl;
system("pause");
return 0;
}

