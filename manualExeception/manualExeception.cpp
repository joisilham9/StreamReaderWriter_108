#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "selamat belajar di prodi ti umy " << endl;
		// throw 0,5; //melemparkan sebuah integer maka
		cout << " pernyataan tidak akan diexsekusi" << endl;
	}
	catch (int a) {
		//blok ini akan diesekusi
		cout << " pengecualian akan diexsekusi" << endl;
	}
	catch (....) {
		//jika selain integer maka block ini akan dieksekusi
		cout << "default pengecualina diexsekusi " << endl;

	}
	return 0;
}