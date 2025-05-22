#include <iostream>
using namespace std;

string namaGlobal = "Ilmu";

void namaVariabel() {
    string namaLokal = "Komputer";

    cout << namaLokal << endl;
   
    cout << namaGlobal << endl;
}

int main () {
    namaVariabel();
   
    cout << namaGlobal << endl;
   
    cout << namaLokal << endl;

}