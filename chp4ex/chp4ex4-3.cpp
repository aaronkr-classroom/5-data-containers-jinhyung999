//chp4ex4-3

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int s;
	
	cout << "enter size : ";
	cin >> s;

	for (int i = 1; i < 1001; i++) {
		cout << setw(s) << i << " ";
		cout << setw(s) << i * i << endl;
	}
	
return 0;
}
