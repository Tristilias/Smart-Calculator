#include <iostream>
#include "dasar.h"
using namespace std;

double Tambah(double a, double b) {
    return a + b;
}
double Kurang(double a, double b) {
    return a - b;
}
double Kali(double a, double b) {
    return a * b;
}
double Bagi(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cerr << "Error: Pembagian dengan nol tidak diperbolehkan.\n";
        return 0;
    }
}
double Modulus(double a, double b) {
    if (b != 0) {
        return static_cast<int>(a) % static_cast<int>(b);
    } else {
        cerr << "Error: Modulus dengan nol tidak diperbolehkan.\n";
        return 0;
    }
}

void menuDasar() {
    int pilihan;
    double a, b;

    cout << "===Menu Operasi Dasar===\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "5. Modulus\n";
    cout << "0. Exit\n";
    cout << "Pilih operasi (1-5): ";
    cin >> pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    switch (pilihan) {
        case 1:
            cout << "Hasil Penjumlahan: " << Tambah(a, b) << endl;
            break;
        case 2:
            cout << "Hasil Pengurangan: " << Kurang(a, b) << endl;
            break;
        case 3:
            cout << "Hasil Perkalian: " << Kali(a, b) << endl;
            break;
        case 4:
            cout << "Hasil Pembagian: " << Bagi(a, b) << endl;
            break;
        case 5:
            cout << "Hasil Modulus: " << Modulus(a, b) << endl;
            break;
        case 0:
            cout << "Keluar dari menu Operasi Dasar.\n";
            break;
        default:
            cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
            menuDasar();
            break;
    }
}