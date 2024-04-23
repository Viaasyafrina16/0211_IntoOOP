// OOP 1
#include <iostream>
using namespace std;

class Mahasiswa {
public: // akses modifier
	string nama;
	int umur;
	string jurusan;
	void output() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << " jurusan: " << jurusan << endl;
	}
};


class Matakuliah {
private:
	string kodeMK;
	string namaMk;
	int sks;
public:
	void input() {
		cout << "kode MK: ";
		cin >> kodeMK;
		cout << "Nama MK: ";
		cin >> namaMk;
		cout << "SKS: ";
		cin >> sks;
	}

	void output() {
		cout << "Kode MK: " << kodeMK << endl;
		cout << "Nama MK: " << namaMk << endl;
		cout << "sks: " << sks << endl;
	}
};

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.nama = "Budi";
	mhs.umur = 20;
	mhs.jurusan = "Teknik Informatika";
	mhs.output();

	mk.input();
	mk.output();

	return 0;
}

// OOP 2

#include <iostream>
using namespace std;

class bangunDatar{
	//akses modifier
private:
	float panjang, Lebar;
public:
	float Luas;

	void input() { // methode input persegi panjang

		cout << "Masukan Panjangnya = ";
		cin >> panjang;
		cout << "Masukan Lebarnya = ";
		cin >> Lebar;
	}

	float hitungLuas() {
		return panjang * Lebar;
	}




	

