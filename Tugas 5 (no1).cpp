/*1. Buat program sederhana untuk menulis/merekam data mahasiswa yang terdiri dari stambuk, nama mahasiswa, kelas dan ipk.
	 Data tersebut disimpan dengan nama file objek datamhs dan nama file data “datamhs.txt”.*/
  
#include <iostream>
#include <fstream>

using namespace std;
int main () {
	char nama[100],kelas[10];
	int stambuk;
	float ipk;

	ofstream datamhs;
	datamhs.open ("datamhs.txt", ios::app);
	
	cout<<"Nama : ";
	cin.getline(nama,100);
	
	cout<<"Kelas : ";
	cin.getline(kelas,10);
	
	cout<<"IPK : ";
	cin>>ipk;
	
	cout<<"Stambuk : "; 
	cin>>stambuk;
	
	datamhs <<"Nama : "<<nama;
	datamhs <<"\nStambuk : "<<stambuk;
	datamhs <<"\nkelas : "<<kelas;
	datamhs <<"\nIPK : "<<ipk;

	if(!datamhs.fail()){
		cout<<"Text telah ditulis ke dalam File(datamhs.txt)"<<endl; //jika output if yang muncul maka file behasil dibuat kedalam .txt
		datamhs.close();	
	}else{
		cout<<"File tidak ditemukan"<<endl;//jika output else yang muncul maka file tdk ditemukan dan file .txt gagal dibuat
	}

return 0;
}
