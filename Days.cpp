#include <iostream>
using namespace std;
main ()
{
int input=0,year=0,month,days=0;
cout <<"Please enter number of days : ";
cin>>input;
if (input>>0)
{
 year=(input/365);
 month=((input%365)/30);
 days=((input%365)%30);
 cout<<year<< " years , "<<month<<" months , "<<days<<" Days ";
}
else 
{
cout << "Please enter valid input";
}
return 0;
}

