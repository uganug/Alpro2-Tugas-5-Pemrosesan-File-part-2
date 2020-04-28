//4. Jelaskan jenis operasi file dan berikan contohnya masing-masing
//ios::out → Baca input dari file, pasangan dari ofstream
#include <fstream>
#include <iostream>
using namespace std;
int main() {
	char nama[30];
	int umur;
	char file[20];
	cout << "Nama mahasiswa: ";
	cin >> nama;
	
	cout << "Umur: ";
	cin >> umur;
	
	cout << "\nNama File: ";
	cin >> file;
	
	ofstream Students(file, ios::out);
	Students << nama << "\n" << umur;
return 0;
}
