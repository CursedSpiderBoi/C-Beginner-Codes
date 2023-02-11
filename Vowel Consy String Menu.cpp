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
int vowely(char arr[],int fq)
{
	int f=0;
    for (int i=0;i<fq;i++)
{
	if (((arr[i]>=65)&&(arr[i]<=90))||((arr[i])>=97&&(arr[i]<=122)))
	{
		if((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u'))
	{
	f++;	
	}
	else if((arr[i]=='A')||(arr[i]=='E')||(arr[i]=='I')||(arr[i]=='O')||(arr[i]=='U'))
	{
	f++;	
	}
	}
}
return f;
}
int consy(char arr[],int fq,int vowel)
{
	int f=0;
f=fq-vowel;
return f;
}
void input(char arr[],int size)
{
	cout<<"Enter string value : ";
cin.getline(arr,size);
}
int count(char arr[],int size)
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
int main ()
{
int size=100,fq=0;
char arr[size],choice;
UwU:
input(arr,size);
int space=(word(arr))-1;
fq=count(arr,size);
cout<<"****************MENU****************"<<endl;
cout<<"A)COUNT NUMBER OF VOWELS IN STRING\nB)COUNT THE NUMBER OF CONSONANTS\nC)COUNT BOTH VOWELS AND CONSONANTS\nD)ENTER ANOTHER STRING\nE)EXIT THE PROGRAM\n";
cin>>choice;
{
	if((choice=='a')||(choice=='A'))
{
	int vowel=vowely(arr,fq);
	cout<<"The number of vowels in string is "<<vowel<<endl;
}
else if((choice=='b')||(choice=='B'))
{
	int vowel=vowely(arr,fq);
	int conso=consy(arr,fq,vowel);
	cout<<"The number of consonants in string is "<<conso-space<<endl;
}
else if((choice=='c')||(choice=='C'))
{
	
int vowel=vowely(arr,fq);
int conso=consy(arr,fq,vowel);
cout<<"The number of vowels in string is "<<vowel<<" and consonants are "<<conso-space<<endl;
}
else if((choice=='e')||(choice=='E'))
{
	cin.ignore();
	goto UwU;
}
else if((choice=='d')||(choice=='D'))
{
	cout<<"**********Terminating program**********";
	return 0;
}
}
return 0;
}
