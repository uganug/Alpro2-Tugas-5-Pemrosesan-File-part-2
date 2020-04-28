#include<iostream>
#include <fstream>
using namespace std;
int main () 
{
ofstream mhsFile;
	mhsFile.open ("datamhs.txt", ios::app);
	mhsFile <<"Stambuk : 13020190261";
	mhsFile <<"\nNama : Nugraha Wanaspati ";
	mhsFile <<"\nKelas : A5";

	if(!mhsFile.fail()){
		cout<<"Text telah ditulis ke dalam File(datamhs.txt)"<<endl; //jika output if yang muncul maka file behasil dibuat kedalam .txt
		mhsFile.close();	
	}else{
		cout<<"File tidak ditemukan"<<endl;//jika output else yang muncul maka file tdk ditemukan dan file .txt gagal dibuat
	}
	
return 0;

}
