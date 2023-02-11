#include<iostream>
using namespace std;
int main()
{
    int roll1, roll2, roll3, roll4, roll5, roll1a, roll1b, roll1c, roll1d, roll1e, roll2a, roll2b, roll2c, roll2d, roll2e, roll3a, roll3b, roll3c, roll3d, roll3e, roll4a, roll4b, roll4c, roll4d, roll4e, roll5a, roll5b, roll5c, roll5d, roll5e;
    {
        cout << "Please enter first student roll no. : "; getchar;
        cin >> roll1;
        cout << "Enter Subject A result : ";
        cin >> roll1a;
        cout << "Enter Subject B result : ";
        cin >> roll1b;
        cout << "Enter Subject C result : ";
        cin >> roll1c;
        cout << "Enter Subject D result : ";
        cin >> roll1d;
        cout << "Enter Subject E result : ";
        cin >> roll1e;
    }
    {
        cout << "Please enter Second student roll no. : "; getchar;
        cin >> roll2;
        cout << "Enter Subject A result : ";
        cin >> roll2a;
        cout << "Enter Subject B result : ";
        cin >> roll2b;
        cout << "Enter Subject C result : ";
        cin >> roll2c;
        cout << "Enter Subject D result : ";
        cin >> roll2d;
        cout << "Enter Subject E result : ";
        cin >> roll2e;
    }
    {
        cout << "Please enter Third student roll no. : "; getchar;
        cin >> roll3;
        cout << "Enter Subject A result : ";
        cin >> roll3a;
        cout << "Enter Subject B result : ";
        cin >> roll3b;
        cout << "Enter Subject C result : ";
        cin >> roll3c;
        cout << "Enter Subject D result : ";
        cin >> roll3d;
        cout << "Enter Subject E result : ";
        cin >> roll3e;
    }
    {
        cout << "Please enter Forth student roll no. : "; getchar;
        cin >> roll4;
        cout << "Enter Subject A result : ";
        cin >> roll4a;
        cout << "Enter Subject B result : ";
        cin >> roll4b;
        cout << "Enter Subject C result : ";
        cin >> roll4c;
        cout << "Enter Subject D result : ";
        cin >> roll4d;
        cout << "Enter Subject E result : ";
        cin >> roll4e;
    }
    {
        cout << "Please enter Fifth student roll no. : "; getchar;
        cin >> roll5;
        cout << "Enter Subject A result : ";
        cin >> roll5a;
        cout << "Enter Subject B result : ";
        cin >> roll5b;
        cout << "Enter Subject C result : ";
        cin >> roll5c;
        cout << "Enter Subject D result : ";
        cin >> roll5d;
        cout << "Enter Subject E result : ";
        cin >> roll5e;
    }
    int a, b, c, d, e;
    (a = roll1a + roll1b + roll1c + roll1d + roll1e);
    (b = roll2a + roll2b + roll2c + roll2d + roll2e);
    (c = roll3a + roll3b + roll3c + roll3d + roll3e);
    (d = roll4a + roll4b + roll4c + roll4d + roll4e);
    (e = roll5a + roll5b + roll5c + roll5d + roll5e);
    {
        if (a>b && a>c && a>d && a>e)
        {
            cout << "" << roll1 << " has highest aggregate of " << a << "" << endl;
        }
        else if (b>a && b>c && b>d && b>e)
        {
            cout << "" << roll2 << " has highest aggregate of " << b << "" << endl;
        }
        else if (c>a && c>b && c>d && c>e)
        {
            cout << "" << roll3 << " has highest aggregate of " << c << "" << endl;
        }
        else if (d>a && d>b && d>c && d>e)
        {
            cout << "" << roll4 << " has highest aggregate of " << d << "" << endl;
        }
        else
        {
            cout << "" << roll5 << " has highest aggregate of " << e << "" << endl;
        }
    }
        return 0;
}
