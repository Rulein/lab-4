# include <iostream>
# include <cmath>

using namespace std;

int main()

{
	double V1, V2, S, T, distance, S2;
	cout << "V1=";
	cin >> V1;
	cout << "V2=";
	cin >> V2;
	cout << "S=";
	cin >> S;
	cout << "T=";
	cin >> T;
	S2 = T * (V1 + V2);
	distance = S + S2;
	cout << "distance=" << distance << endl;
	system("pause");
	return 0;
}