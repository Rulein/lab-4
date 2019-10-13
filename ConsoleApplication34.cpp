#include <iostream>

using namespace std;

int main()
{
	float x, a, y, price;
	cout << "x=";
	cin >> x;
	cout << "a=";
	cin >> a;
	cout << "y=";
	cin >> y;
	price = a / x;
	cout << "1kg=" << price << endl;
	cout << "y=" << y * price << endl;
	system("pause");
	return 0;
}


