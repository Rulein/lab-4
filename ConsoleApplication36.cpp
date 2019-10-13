#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	float A, B;
	cout << "A=";
	cin >> A;
    cout << "B=";
	cin >> B;
	if (A > 0)
	{
		cout << "x=" <<(-1 * B) / A;
	}
	else
		cout << "error";
	system("pause");
	return 0;
}