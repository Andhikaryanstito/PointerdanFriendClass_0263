#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    void showNim(){
        cout <<"No induk =" <<nim<<endl;
    }
};
int main (){

    Mahasiswa mhs{1}; // objek mhs
    mhs.showNim(); // member access operator

    Mahasiswa &refMhs = mhs; //pointer reference refmhs
    refMhs.nim = 2; // member access operator
    mhs.showNim();

    Mahasiswa *pMhs = &mhs; //pointer dereference pmhs
    pMhs->nim = 3 ;//arrow operator
    pMhs->showNim();
    return 0;
}