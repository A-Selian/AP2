#include <iostream>
using namespace std;

class contohAkses {
    private:
    int privatevar;

    protected:
    int protectedvar;

    public:
    int publicvar;

    conntohAkses() {
        privatevar = 1;
        protectedvar = 2;
        publicvar = 3;
    }

    void tampilkanSemua() {
        cout << "Akses dari Dalam Class: " << endl;
        cout << privatevar << endl;
        cout << protectedvar << endl;
        cout << publicvar << endl;
    }

};

//Kelas turunan
class Turunan : public contohAkses {
    public:
    void aksesProtected() {
        cout << "Akses publicvar: " << publicvar << endl;
        cout << "Akses protectedvar" << protectedvar << endl;
    }
};

int main() {
    contohAkses obj;
    obj.tampilkanSemua();

    cout << "Akses dari Luar Class: " << endl;
    cout << obj.publicvar << endl;
//    cout << "obj.privatevar: " << obj.privatevar << endl; // Error: privatevar tidak dapat diakses
//    cout << "obj.protectedvar: " << obj.protectedvar << endl; // Error: protectedvar tidak dapat diakses

    Turunan tur;
    tur.aksesProtected();
    return 0;
}