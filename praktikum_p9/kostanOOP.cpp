#include<iostream>
#include<string>

class kostan {
    private:
        std::string  nama,daerah;
        int luas;


    public:
  kostan(std::string n, int l, std::string d ) {
        nama = n;
        luas = l;
        daerah = d;
}

void setNama(std::string n) {
    nama = n; 
}
std::string getNama() {
    return nama;
}

void setLuas(int l) {
    luas = l;
}
int getLuas(){
    return luas;
}

void setDaerah(std::string d){
    daerah = d;
}
std::string getDaerah(){
    return daerah;
}



void tampilkanInfo(){
    std::cout << "Nama: "<< nama << ", luas: " << luas << ", daerah: " << daerah << std::endl;
    }
};

int main (){
    kostan k1("fathilah" , 4*4 , "Caringin");
       std::cout << "informasi awal mahasiswa: "<<std::endl;
        k1.tampilkanInfo();

        k1.setNama("Pondok jati");
        k1.setLuas(10*8);
        k1.setDaerah("GKPN");

        std::cout<<"informasi setelah diubah" <<std::endl;
        k1.tampilkanInfo();


        
        return 0;

}