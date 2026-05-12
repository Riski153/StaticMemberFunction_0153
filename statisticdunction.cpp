#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    private:
        static int nim;
    public:
        int id;
        string nama;

        void setID();
        void printALL();

        static void setNIM(int pnim){
            nim = pnim;
        };

        static int getNIM(){
            return nim;
        }

        Mahasiswa(string pnama) :nama(pnama){
            setID();
        }
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID(){
    id = ++nim;
}

void Mahasiswa::printALL(){
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main(){
    //pembuatan object dan pemberian nilai
    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatmiko");

    //memberi nilai pada setNim() untuk merubah nilai NIM
    Mahasiswa::setNim(9);

    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("Joko Wahono");

    //memanggil prosedur printAll()
    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    return 0;
}