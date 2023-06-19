#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File : ";
	cin >> NamaFile;

	// membuka file dalam mode menulis.
	ofstream outfile;
	// menujuk ke sebuah nama file
	outfile.open(NamaFile, ios::out);
	 
	cout << ">= Menulis file, \'q'\ untuk keluar " << endl;

	// membuka file dalam mode membaca
	ifstream infile;
	// menunjukan ke sebuah file
	infile.open(NamaFile, ios::in);

	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{

	}
}