#include <iostream>
using namespace std;
int shape_tri(int size)
{
	int height=size;
	for(int line = 1; line <=height; line++)
    {
        for(int c = 1; c <= line; c++)
        {
            cout <<c;
        }
        cout << endl;
    }
    for(int line = 1; line <= height; line++)
    {
    	int i=1;
    	for (int c=size;c>line;c--)
    	{
    		cout <<i;
    		i++;
		}
		cout<<endl;
	}
}
int shape_s(int size)
{
	int square,line;
	line=0;
	for (int c=1;c<=size;c++)
	{
	for(int k=1;k<=size;k++)
	{
		cout <<k;
	}
	cout<<endl;
}
}
int main ()
{
int size;
cout <<"Enter shape size for square: ";
cin>>size;
shape_s(size);
cout <<"Enter shape size for triangle: ";
cin>>size;
shape_tri(size);
}

