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
};
