//chp4ex4-2

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	for (int i = 1; i < 101; i++) {
		cout << setw(3) << i << " ";
		cout << setw(6) << i * i << endl;
	}
	
	return 0;

}
