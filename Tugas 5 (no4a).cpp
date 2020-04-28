//4. Jelaskan jenis operasi file dan berikan contohnya masing-masing
//ios::in → Baca input dari file, pasangan dari ifstream

#include <fstream>
#include <iostream>
using namespace std;
int main () {
	ifstream belajar;
	char isi;
	belajar.open("datatugas5.txt",ios::in);

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
