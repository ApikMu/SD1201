#include<iostream>
#include<string>

using namespace std;

class hewan {
    public:
    void predator(){
        cout <<"Hewan ini adalah predator"<<endl;
    }
    void taring(){
        cout <<"Hewan ini bertaring"<<endl;
    }
    void cakar(){
        cout <<"Hewan ini memiliki cakar"<<endl;
    }

};

class harimau :
public hewan {
    public:
    void pradator(){
        cout<<"ini adalah harimau"<<endl;
    }
};
class singa:
public hewan{
    public:
    void taring(){
        cout <<"Ini adalah singa"<<endl;
    }
};
class macan:
public hewan{
    public:
    void cakar(){
        cout<<"ini adalah macan"<<endl;
    }
};
int main(){
    harimau hrm;
    // hrm.getHarimau();
    hrm.predator();
    hrm.taring();
    hrm.cakar();

    singa sg;
    //sg.getSinga();
    sg.predator();
    sg.taring();
    sg.cakar();

    macan mc;
    //mc.getMacan();
    mc.predator();
    mc.taring();
    mc.cakar();


return 0;
}
