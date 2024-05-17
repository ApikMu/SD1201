#include<iostream>
#include<string>

class robot {
    private:
        std::string  nama,mbti;
        int umur;


    public:
  robot (std::string n, int u, std::string m ) {
        nama = n;
        umur = u;
        mbti = m;
}

void setNama(std::string n) {
    nama = n; 
}
std::string getNama() {
    return nama;
}

void setUmur(int u) {
    umur = u;
}
int getUmur(){
    return umur;
}

void setMbti(std::string m){
    mbti = m;
}
std::string getMbti(){
    return mbti;
}



void tampilkanInfo(){
    std::cout << "Nama: "<< nama << ", umur: " << umur << ", mbti: " << mbti << std::endl;
    }
};

int main (){
    robot r1("adli" , 16, "istj");
       std::cout << "informasi awal mahasiswa: "<<std::endl;
        r1.tampilkanInfo();

        std::cout << "nama: " <<r1.getNama() <<std::endl;

        
        return 0;

}