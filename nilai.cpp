#include <iostream>
#include <cstdlib> // Diperlukan untuk system("pause")

using namespace std;

int main() {
    int nilai;

    cout << "=== PROGRAM INPUT NILAI ===" << endl;
    cout << "Masukkan nilai Anda: ";
    cin >> nilai;

    cout << "Hasil Grade: ";
    
    // Logika percabangan (if-else) sesuai instruksi tugas
    if (nilai > 90) {
        cout << "A" << endl;
    } 
    else if (nilai > 80) {
        cout << "B" << endl;
    } 
    else if (nilai > 70) {
        cout << "C" << endl;
    } 
    else {
        cout << "D" << endl;
    }

    cout << "===========================" << endl;
    
    // Menahan jendela CMD agar file .exe tidak langsung menutup
    cout << endl;
    system("pause");

    return 0;
}
