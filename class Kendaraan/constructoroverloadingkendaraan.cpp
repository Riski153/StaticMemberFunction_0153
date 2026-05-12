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

int main() {
        // Membuat object dengan constructor berbeda
    Kendaraan k1;
    Kendaraan k2(101);
    Kendaraan k3("Toyota Avanza");
    Kendaraan k4(202, "Honda Civic");

     // Menampilkan data kendaraan
    cout << "Data Kendaraan 1" << endl;
    k1.tampilkanData();

    cout << "Data Kendaraan 2" << endl;
    k2.tampilkanData();

    cout << "Data Kendaraan 3" << endl;
    k3.tampilkanData();

    cout << "Data Kendaraan 4" << endl;
    k4.tampilkanData();

};
