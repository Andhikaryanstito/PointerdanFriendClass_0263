#include <iostream>
using namespace std;

class pelajar;  
class manusia {
public:
    void showNilaiPelajar(pelajar &x);
};
class pelajar {
    int nilai;

public:
    pelajar() { nilai = 100; }

    // Memberikan akses ke manusia::showNilaiPelajar
    friend void manusia::showNilaiPelajar(pelajar &x);
};