//3. Buat Program sederhana untuk merekam atau menulis data sembarang dengan nama file "datatugas5.txt"

#include <fstream>
#include <iostream>
using namespace std;
int main (){
	ofstream belajar;
	belajar.open ("datatugas5.txt", ios::app);
	belajar << "coronavirus hilang aamiin";
	
	if(!belajar.fail()){
		cout<<"Text telah ditulis ke dalam File(datatugas5.txt)"<<endl; //jika output if yang muncul maka file behasil dibuat kedalam .txt
		belajar.close();	
	}else{
		cout<<"File tidak ditemukan"<<endl;//jika output else yang muncul maka file tdk ditemukan dan file .txt gagal dibuat
	}
	
return 0;
}
