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
		//membuka file dalam mode file
		infile.open(NamaFile, ios::in);

		cout << endl << ">= Membuka dan membaca file " << endl;
		//jika file ada maka
		if (infile.is_open())
		{

			// melakukan perulangan setiap baris
			while (getline(infile, baris))
			{
				// dan tampilkan di sini
				cout << baris << '\n';
			}
			//tutup file tersebut setelah selesai
			infile.close();
		}
		// jika tidak ditemukan file makna akan menampilkan ini
		else cout << " unable to open file";
		return 0;
	}
}