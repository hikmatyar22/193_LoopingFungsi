#include <iostream>
using namespace std;

int sisi;

void inputdata() {
	cout << " Masukan Nilai Sisi : ";
	cin >> sisi;

}
int hitungluas() {
	return sisi * sisi;
}
void luas() {
	cout << "luas perseginya adalah : " << hitungluas() << endl;
}
int main() {
	inputdata();
	luas();

}