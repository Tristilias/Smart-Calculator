#include <iostream>
#include "bangun.h"
using namespace std;

void menuBangun() {
    int pilihan;
    cout << "===Menu Bangun Datar dan Bangun Ruang===\n";
    cout << "Silahkan memilih opsi yang tersedia:\n";
    cout << "1. Luas\n";
    cout << "2. Keliling\n";
    cout << "3. Volume\n";
    cout << "4. Surface Area\n";
    cout << "0. Exit\n";
    cout << "Pilih: "; cin >> pilihan;

    switch(pilihan) {
        case 1:
            menuLuas(); // Panggil fungsi luas di bangun.h
            break;
        case 2:
            menuKeliling(); // Panggil fungsi keliling di bangun.h
            break;
        case 3:
            menuVolume(); // Panggil fungsi volume di bangun.h
            break;
        case 4:
            menuSurface(); // Panggil fungsi surface di bangun.h
            break;
        case 0:
            cout << "Keluar dari menu Bangun.\n";
            break;
        default:
            cout << "Pilihan tidak valid, silakan coba lagi.\n";
            menuBangun();
            break;
    }
}