#include <iostream>
#include <exception>
//
#include <array>
using namespace std;

int main()
{
	cout << " awal program " << endl; // penanda 1:..
	try {
		array <int, 3> data = { 1,2,3 };
		//pesan array integer 3 elemen
		// cout << data.at(5)<< endl;
		// memanggil array elemen ke 5

	}
	catch (exception& e) {
		//penangkap menggunakan obyek exception 
		cout << e.what() << endl;
		/* akana dieksekusi karna array dat hanya memiliki 3 elemen */
	}
	cout << "baris program yang terakhir" << endl;
	/*penanda 2: bahwa program berjalan tenpa berhenti meskipun terjadi kesalahan*/
	return 0;
} 