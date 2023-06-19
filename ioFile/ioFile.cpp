#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menujuk ke sebuah nama file.
	outfile.open("contohfile.txt");

	cout << ">=Menulis file, \'q'\ untuk keluar" << endl;

	while (true) {
		cout << "-";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q")break;
		//menulis dan memasukan nilai  dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarnag tutup filenya
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile; 
	//menujuk ke suatu file
	infile.open("contohfile.txt"); 

	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perluangkan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan di sini
			cout << baris << '\n';
		}
		//tutup file tersebut stelah selesai
		infile.close();
	}
	//jika tidak ditemukan file maka menapilkan ini'
	else cout << " unable to open file";
	return 0;
}
