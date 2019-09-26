#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a;
	cout << "Enter a" << endl;
	cin >> a;
	if (a>0 && a<2)
	{
		a = a * 180;
		cout << "a=" << a << endl;
	}
	else
	{
		cout << "error";
	}
	system("pause");
	return 0;
}
