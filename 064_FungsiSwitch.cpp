#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input() {
	cout << "Masukan Bilangan Pertama = ";
	cin >> bilSatu;
	cout << "Masukan Bilangan Kedua = ";
	cin >> bilDua;
}


float penjumlahan(float a, float b) {
	return a + b;
}

float pembagian(float a, float b) {
	return a / b;
}

float perkalian(float a, float b) {
	return a * b;
}

float pengurangan(float a, float b) {
	return a - b;
}


int main()
{
	int pilihan;

	do
	{
		cout << "============================";
		cout << "MENU" << endl;
		cout << "1. Penjumlahan " << endl;
		cout << "2. Pembagian " << endl;
		cout << "3. Perkalian " << endl;
		cout << "4. Pengurangan" << endl;
		cout << "5. EXIT " << endl;
		cout << "Masukan pilihan 1/2/3/4/5 = ";
		cin >> pilihan;
	} while (pilihan !=5 );

	switch (pilihan) {
	case 1:
		input();
		cout << "Hasil Penjumlahan = " << penjumlahan(bilSatu, bilDua) << endl;
		break;
	case 2:
		input();
		cout << "Hasil Pembagian = " << pengurangan(bilSatu, bilDua) << endl;
		break;
	case 3:
		input();
		cout << "Hasil Perkalian = " << perkalian(bilSatu, bilDua) << endl;
		break;
	case 4:
		input();
		cout << "Hasil Penguranagn = " << penjumlahan(bilSatu, bilDua) << endl;
		break;

	}
}

