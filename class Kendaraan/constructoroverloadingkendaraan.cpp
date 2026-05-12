#include <iostream>
#include <string>

using namespace std;

class Kendaraan {
    private:
    int idKendaraan;
    string namaKendaraan;

    public:

    // Constructor tanpa parameter
    Kendaraan() {
        idKendaraan = 0;
        namaKendaraan = "Default";
    }

      // Constructor dengan parameter id
    Kendaraan(int id) {
        idKendaraan = id;
        namaKendaraan = "Belum Ada Nama";
    }

      // Constructor dengan parameter nama
    Kendaraan(string nama) {
        idKendaraan = 0;
        namaKendaraan = nama;
    }

      // Constructor dengan parameter lengkap
    Kendaraan(int id, string nama) {
        idKendaraan = id;
        namaKendaraan = nama;
    }

        // Method untuk menampilkan data kendaraan
    void tampilkanData() {
        cout << "ID Kendaraan   : " << idKendaraan << endl;
        cout << "Nama Kendaraan : " << namaKendaraan << endl;
        cout << endl;
    }
};

int main() {};
