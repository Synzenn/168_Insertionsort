#include <iostream>
using namespace std;

int arr[20];												//Membuat Array dengan panjang data 20
int n;														//Membbuat Variable unput n

void input() {												//Prosedur input
	while (true)
	{
		cout << "Masukkan Jumlah Data Pada Array : ";		//Membuat inputan jumlah element array
		cin >> n;											//Memanggil variabel inputan

		if (n <= 20) {										//Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";	//Menampilkan pesan jika data melebihi 20
		}
	}
	cout << endl;											//Mmembuat jarak per baris program
	cout << "======================" << endl;				//Membuat tampilan susuan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)								//Mengggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";				//Memasukkan atau menginputkan nilai data n	
		cin >> arr[i];										//Menyimpan nilai data n kedalam array arr
	}
}
void insertionsort() {										//Prosedur insertionsort

	int temp;												//Membuat variabel data temporer atau penyimpnan sementara 
	int i, j;												//Membuat variabel j sebagai penanda 

	
}