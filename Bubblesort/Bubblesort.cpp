#include <iostream>
using namespace std;

int a[20];				//Deklarasi array a dengan ukuran 20
int n;					//Deklarasi variable n untuk menyimpan banyaknya elemen pada arry


void input() {			//Metode untuk input
	while (true) { //looping
		cout << "Masukkan banyaknya elemen pada array : "; //output ke layar
		cin >> n; //Input dari pengguna
		if (n <= 20) // Jika n kurang dari atau sama dengan 20
			break;	// Keluar dari loop
		else {		// Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
		}
	}
	cout << endl;									// Output baris kosong
	cout << "========================" << endl;		// Output ke layar
	cout << "Masukkan Elemen Array" << endl;		// Output ke layar
	cout << "========================" << endl;		// Output ke layar
	
	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ":";
		cin >> a[i];
	}
}

void display() { // Method  untuk menampilkan  hasil
	cout << endl; // Output baris kosong
	cout << "===========================" << endl;		// Output Ke layar
	cout << "Elemen Array yang telah tersusun" << endl; // Output Ke layar
	cout << "===========================" << endl;		// Output Ke layar
	for (int j = 0; j < n; j++) { // Looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;	  // Output ke layar
	}
	cout << endl;
}

void bubbleSortArray() {					// Method untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {			// Looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {   // Looping dengan j dimulai dari 0 hingga n-i-1
			if (a[j] > a[j + 1]) {			// Jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];			// Simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];			// Assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;			// Assign nilai temp ke a[j+1]
			}
		}
	}
}

int main() {
	//Membuat objek obj dari class BubbleSort
	input();			// Memanggil read() dari class BubbleSort
	bubbleSortArray();  // Memanggil bubbleSortArray() dari class BubbleSort
	display();			// Memanggil display() dari class BubbleSort
	return 0;
}

