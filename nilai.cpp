#include <iostream>
#include <limits>
using namespace std;

int main() {
    int nilai;

    cout << "===========================\n";
    cout << "    PROGRAM INPUT NILAI    \n";
    cout << "===========================\n";

    cout << "Masukkan nilai Anda: ";

    if (!(cin >> nilai)) {
        cout << "Input harus berupa angka!\n";
        return 1;
    }

    if (nilai < 0 || nilai > 100) {
        cout << "Nilai harus antara 0 sampai 100!\n";
        return 1;
    }

    cout << "Hasil Grade: ";

    if (nilai > 90) {
        cout << "A\n";
    }
    else if (nilai > 80) {
        cout << "B\n";
    }
    else if (nilai > 70) {
        cout << "C\n";
    }
    else {
        cout << "D\n";
    }

    cout << "===========================\n";

    cout << "\nTekan Enter untuk keluar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}
