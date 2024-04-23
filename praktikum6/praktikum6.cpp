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





