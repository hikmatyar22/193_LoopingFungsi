#include <iostream>
using namespace std;

int main()
{
	int x;
	srand(time(0));

	x = rand() % 10;

	cout << "Nilai Awal : " << x << endl;

	do
	{
		cout << "Perulangan Do..While" << endl;
		x = rand() % 10;

		cout << "Nilai Awal : " << x << endl;
	} while (x > 4);

}