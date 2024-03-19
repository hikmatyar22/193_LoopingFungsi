#include <iostream>
using namespace std;

int main()
{
	int x;
	srand(time(0));

	x = rand() % 10;

	cout << "Nilai x Awal : " << x << endl;

	while (x > 4) {

		cout << "perulanan While" << endl;
		x = rand() % 10;

		cout << "Nilai x : " << x << endl;

	}

}
