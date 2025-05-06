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
// Definisi fungsi setelah deklarasi class pelajar
void manusia::showNilaiPelajar(pelajar &x) {
    cout << x.nilai << endl;
}

int main() {
    manusia budi;
    pelajar pbudi;

    budi.showNilaiPelajar(pbudi);

    return 0;
}