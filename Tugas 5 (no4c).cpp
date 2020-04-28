//4. Jelaskan jenis operasi file dan berikan contohnya masing-masing
//ios::app → Baca input dari file, pasangan dari ofstream
#include<iostream>
#include <fstream>
using namespace std;
int main () 
{
ofstream biodata;
	biodata.open ("datamhs1.txt", ios::app);
	biodata <<"Nama : Nugraha Wanaspati ";
	biodata <<"\nStambuk : 13020190261";
	biodata <<"\nKelas : A5";
	biodata <<"\nHobi : Nonton";
	biodata <<"\nHarapan : Coronavius hilang aamiin";
	biodata <<"\n\n";
	
	if(!biodata.fail()){
		cout<<"Text telah ditulis ke dalam File(datamhs1.txt)"<<endl; //jika output if yang muncul maka file behasil dibuat kedalam .txt
		biodata.close();	
	}else{
		cout<<"File tidak ditemukan"<<endl;//jika output else yang muncul maka file tdk ditemukan dan file .txt gagal dibuat
	}
	
return 0;

}
