#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    private:
        static iint nim;
    public:
        int id;
        string nama;

        void setID();
        void printALL();

        static void setNIM(int pnim){
            nim = pnim;
        }
};