#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {

private:
    static int nim;

public:
    int id;
    string nama;

    // static function untuk mengubah nilai nim
    static void setNIM(int pnim) {
        nim = pnim;
    }

    // static function untuk mengambil nilai nim
    static int getNIM() {
        return nim;
    }

    // deklarasi method
    void setID();
    void printAll();

    // constructor
    Mahasiswa(string pnama) : nama(pnama) {
        setID();
    }
};

// inisialisasi variabel static
int Mahasiswa::nim = 0;

// implementasi method setID
void Mahasiswa::setID() {
    id = ++nim;
}

// implementasi method printAll
void Mahasiswa::printAll() {

    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main() {

    // pembuatan object dan pemberian nilai
    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatmiko");

    // mengubah nilai NIM
    Mahasiswa::setNIM(9);

    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("Joko Wahono");

    // menampilkan data
    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    // mengambil nilai static dari luar object
    cout << "Akses dari luar object = "
         << Mahasiswa::getNIM() << endl;

    system("pause");
    return 0;
}