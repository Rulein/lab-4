# include <iostream>
# include <cmath>

using namespace std;

int main()

{
	double a1, b1, c1, a2, b2, c2, x, y, D;
	cout << "enter a1, b1, c1"<< endl;
	cin >> a1 >> b1 >> c1;
	cout << "enter a2, b2, c2"<< endl;
	cin >> a2 >> b2 >> c2;

	D = a1 * b2 - a2 * b1;
	x = (c1*b2 - c2 * b1) / D;
	y = (a1*c2 - a2 * c1) / D;
	cout << "x= " << x << endl;
	cout << "y= " << y << endl;

	system("pause");
	return 0;
}
