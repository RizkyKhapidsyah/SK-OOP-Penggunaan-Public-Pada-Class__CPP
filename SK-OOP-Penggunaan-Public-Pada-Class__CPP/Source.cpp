#pragma warning(disable:4996)

#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

void garis() {
	cout << "==============================\n";
}

class siswa {
public:
	char nis[9], nama[20];
	float nilai;
};

int main() {
	system("cls");

	siswa sekolah;
	garis(); cout << endl;
	
	cout << "\t Program Nilai Siswa" << endl << "\t -------------------" << endl;
	cout << " Input NIS = "; cin >> sekolah.nis;
	cout << " Input Nama Siswa = "; cin >> sekolah.nama;
	cout << " Input Nilai Akhir = "; cin >> sekolah.nilai;
	
	system("cls");
	garis(); cout << endl;

	cout << "\t Nilai Siswa" << endl
		<< "\t ------------" << endl << endl
		<< " NIS = " << sekolah.nis << endl
		<< " Nama Siswa = " << sekolah.nama << endl
		<< " Nilai Akhir = " << sekolah.nilai << endl;
	
	garis();
	
	_getch();
	return 0;
}