#include <iostream>
#include "luas.h"
using namespace std;

int main() {
    int pilihan;

    cout << "===Smart Calculator===\n";
    cout << "Silahkan memilih opsi yang tersedia:\n";
    cout << "1. Luas\n";
    cout << "2. Exit\n";
    cout << "Pilih: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            menuLuas(); //ini untuk panggil fungsi
            break;
        case 2:
            cout << "Terima kasih telah menggunakan Smart Calculator. Sampai jumpa!\n";
            break;
        default:
            cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
            break;
        }
        system("pause");
    return 0;
}