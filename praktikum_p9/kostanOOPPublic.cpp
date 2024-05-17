#include<iostream>

using namespace std;  


class kostan {
 public:
 string nama;
 int luas;
 string daerah;

void tampilkanInfo(){
    cout << "Nama: " << nama <<endl;
    cout << "luas: " << luas<< endl;
    cout << "Dearah: " << daerah << endl;
    }
};

int main (){
   kostan tempat;

    tempat.nama = "pondok jati";
    tempat.luas = 10*8;
    tempat.daerah = "GKPN";

    tempat.tampilkanInfo();
        
        return 0;

}