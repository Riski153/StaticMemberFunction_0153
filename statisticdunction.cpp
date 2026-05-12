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
    
}