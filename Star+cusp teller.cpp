#include <iostream>
using namespace std;
main ()
{
	int day,month,deci;
start:
	cout << "Please enter date : ";
	cin >> day;
	cout << "Please enter month : ";
	cin >> month;
	{
	if (((day>=21)&&(month >=3))&&((day<=14)&&(month<=4)))
	{
		cout << "Aries"<<endl;
	}
	else if (((day>=20)&&(month >=4))&&((day<=20)&&(month<=5)))
	{
		cout << "Tauras"<<endl;
	}
	else if (((day>=21)&&(month >=5))&&((day<=21)&&(month<=6)))
	{
		cout << "Gemini"<<endl;
	}
	else if (((day>=22)&&(month >=6))&&((day<=22)&&(month<=7)))
	{
		cout << "Cancer"<<endl;
	}
    else if (((day>=23)&&(month >=7))&&((day<=22)&&(month<=8)))
	{
		cout << "Leo"<<endl;
	}
	 else if (((day>=23)&&(month >=8))&&((day<=22)&&(month<=9)))
	{
		cout << "Virgo"<<endl;
	}
	 else if (((day>=23)&&(month >=9))&&((day<=22)&&(month<=10)))
	{
		cout << "Libra"<<endl;
	}
	else if (((day>=23)&&(month >=10))&&((day<=21)&&(month<=11)))
	{
		cout << "Scorpio"<<endl;
	}
		else if (((day>=22)&&(month >=11))&&((day<=21)&&(month<=12)))
	{
		cout << "Sagittarius"<<endl;
	}
		else if (((day>=22)&&(month >=12))&&((day<=19)&&(month<=1)))
	{
		cout << "Capricon"<<endl;
	}
	else if (((day>=20)&&(month >=1))&&((day<=18)&&(month<=2)))
	{
		cout << "Aquarius"<<endl;
	}
	else 
	{
		cout << "Pieces"<<endl;
	}
      }
      {
	if (((day==18)&&(month ==3))||((day==21)&&(month=3)))
	{
		cout << "The birthday is on the cusp of Pieces"<<endl;
	}
	else if (((day==19)&&(month ==4))||((day==21)&&(month==5)))
	{
		cout << "The birthday is on the cusp of Tauras"<<endl;
	}
	else if (((day==20)&&(month ==5))||((day==22)&&(month==6)))
	{
		cout << "The birthday is on the cusp of Gemini"<<endl;
	}
		else if (((day==21)&&(month ==6))||((day==23)&&(month==7)))
	{
		cout << "The birthday is on the cusp of Cancer"<<endl;
	}
		else if (((day==22)&&(month ==7))||((day==23)&&(month==8)))
	{
		cout << "The birthday is on the cusp of Leo"<<endl;
	}
	else if (((day==22)&&(month ==8))||((day==23)&&(month==9)))
	{
		cout << "The birthday is on the cusp of Virgo"<<endl;
	}
	else if (((day==22)&&(month ==9))||((day==23)&&(month==10)))
	{
		cout << "The birthday is on the cusp of Libra"<<endl;
	}
	else if (((day==22)&&(month ==10))||((day==22)&&(month==11)))
	{
		cout << "The birthday is on the cusp of Scorpio "<<endl;
	}
	else if (((day==21)&&(month ==11))||((day==22)&&(month==12)))
	{
		cout << "The birthday is on the cusp of Sagittarius "<<endl;
	}
    else if (((day==21)&&(month ==12))||((day==20)&&(month==1)))
	{
		cout << "The birthday is on the cusp of Capricon "<<endl;
	}
	else if (((day==19)&&(month ==1))||((day==19)&&(month==2)))
	{
		cout << "The birthday is on the cusp of Capricon "<<endl;
	}
		else if (((day==18)&&(month ==2))||((day==21)&&(month==3)))
	{
		cout << "The birthday is on the cusp of Capricon "<<endl;
	}
	else if (((day==20)&&(month ==3))||((day==20)&&(month==4)))
	{
		cout << "The birthday is on the cusp of Capricon "<<endl;
	}
	else 
	cout <<"This date is not on cusp of any star"<<endl;

      
      
      cout <<"Do you want to try again?(0/1)";
      cin >> deci;
      if (deci==1)
      {
      	goto start;
	  }
	  else
	  {
	  	return 0;
	  }
}
}

