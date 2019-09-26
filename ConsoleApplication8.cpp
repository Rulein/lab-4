#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a;
	cout << "Enter a" << endl;
	cin >> a;
	if (a>0 && a<360)
	{
		a = a / 180;
		cout << "a=" << a << "Pi" << endl;
	}
	else
	{
		cout << "error";
	}
	system("pause");
	return 0;
}

