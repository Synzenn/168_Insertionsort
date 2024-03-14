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

	for (i = 1; i <= n - 1; i++) {					//1. looping dengan i diml\ulai dari 1 hingga n-1

		temp = arr[i];								//2. Simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;									//3. Setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp)				//4. Loopingan while dimana nilai j lebih besat sama dengan 0 dan arr{j} lebih besar dari temp

		{
			arr[j + 1] = arr[j];					//4a. simpan arr [j] ke dalam variabel arr [j+i]
			j--;
		}											//4b. Decrement nilai j by 1

		arr[j + 1] = temp;							//5. simpan nilai temp ke dalam arr [j+1]

		cout << "\nPass" << i << ":";				//Output ke layar 
		for (int k = 0; k < n; k++) {				//Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << ":";					//Output ke layar
		}
			
	}
}

void display() {
	cout << endl;
	cout << "\n====================" << endl;
	cout << "Element Array Yang Telah Tersusun" << endl;
	cout << "=======================" << endl;
}