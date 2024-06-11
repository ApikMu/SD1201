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

class harimau : public hewan {
    public:
    void pradator(){
        cout<<"ini adalah harimau"<<endl;
    }
};
class singa: public hewan{
    public:
    void predator(){
        cout <<"Ini adalah singa"<<endl;
    }
};
class macan:public hewan{
    public:
    void predator(){
        cout<<"ini adalah macan"<<endl;
    }
};
int main(){
    harimau hrm;
    singa sg;
    macan mc;

    // hrm.getHarimau();
    hrm.predator();
    hrm.taring();
    hrm.cakar();
    
    cout<<endl;
    
    //sg.getSinga();
    sg.predator();
    sg.taring();
    sg.cakar();

    cout<<endl;

    //mc.getMacan();
    mc.predator();
    mc.taring();
    mc.cakar();

    cout<<endl;

return 0;
}
