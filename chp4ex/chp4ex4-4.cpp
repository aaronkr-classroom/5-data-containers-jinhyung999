//chp4ex4-4

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double s;

	cout << "enter size : ";
	cin >> s;

	for (double i = 1; i < 1001; i++) {
		cout << setw(s) << i << " ";
		cout << setw(s) << i * i << endl;
	}

	return 0;
}
