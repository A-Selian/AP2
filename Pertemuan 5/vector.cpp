#include <iostream>
#include <vector>

using namespace std;

int main (){
    // Vector Declaration & Initialization
    vector<string> nama_kayawan = {"Agus", "Axel", "AS Wolf", "Justin", "Tensei"};

     for(int i = 0; i < nama_kayawan.size(); i++) {
         cout << nama_kayawan[i] << endl;
     }

     for (string karyawan : nama_kayawan) {
         cout << karyawan << endl;
     }

    nama_kayawan.push_back("Imam");

     for(int i = 0; i < nama_kayawan.size(); i++) {
         cout << nama_kayawan[i] << endl;
     }

    nama_kayawan.pop_back();
    nama_kayawan.erase(nama_kayawan.begin() + 3);

    for(int i = 0; i < nama_kayawan.size(); i++) {
        cout << nama_kayawan[i] << endl;
    }
}