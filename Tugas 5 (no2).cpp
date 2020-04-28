//2. Buat Program sederhana untuk membaca isi data dari file "datatugas5.txt"

#include <fstream>
#include <iostream>
using namespace std;
int main () {
	ifstream belajar;
	char isi;
	belajar.open("datatugas5.txt");

	if(!belajar.fail()){
		cout<<"Isi File -> ";
			while (!belajar.eof()){
				belajar.get(isi);
				cout<<isi;
				}
	belajar.close();
	}else{
		cout<<"File tidak ditemukan"<<endl;
		}

return 0;
}
