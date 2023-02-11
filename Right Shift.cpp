#include<iostream>

using namespace std;

int main()
{

    int i,arr[n];
    //i is the number by which the array is to be shifted
    ///////////////

    for(i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[i] = 0;
	//////////////
    for(i = 0; i < n; i++)
    	cout << arr[i] << " ";

system("pause");
return 0;
}
