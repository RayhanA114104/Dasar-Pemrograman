#include <iostream>

using namespace std;

int main()
{
    cout << "Menghitung Luas Lingkuran" << endl;
    cout << endl;

    float r, luas;

    cout << "Input jari-jari lingkaran: ";
    cin >> r;
    luas = 3.14 * r * r;

    float l,panjang,lebar;
	cout << "PROGRAM C++ MENGHITUNG LUAS PERSEGI PANJANG" << endl;
	cout << "-----------------------------------" << endl;
	cout << "Masukan Panjang\t\t: ";
	cin >> panjang;
	cout << "Masukan Lebar\t\t: ";
	cin >> lebar;
	luas=panjang*lebar;
	cout << "Luas Persegi Panjang\t: " << luas << endl;

    return 0;
}
