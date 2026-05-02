#include <iostream>
#include "luas.h"
#include "dasar.h"
using namespace std;
//test
int main() {
    int pilihan;

    cout << "===Smart Calculator===\n";
    cout << "Silahkan memilih opsi yang tersedia:\n";
    cout << "1. Operasi Dasar\n";
    cout << "2. Luas\n";
    cout << "3. Exit\n";
    cout << "Pilih: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            menuDasar(); //Panggil fungsi dasar di dasar.cpp
            break;
        case 2:
            menuLuas(); //Panggil fungsi luas di luas.cpp
            break;
        case 3:
            cout << "Terima kasih telah menggunakan Smart Calculator. Sampai jumpa!\n";
            break;
        default:
            cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
            break;
        }
        system("pause");
    return 0;
}