#include <iostream>
#include "dasar.h"
using namespace std;

double Penjumlahan(double a, double b) {
    return a + b;
}
double Pengurangan(double a, double b) {
    return a - b;
}
double Perkalian(double a, double b) {
    return a * b;
}
double Pembagian(double a, double b) {
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
    cout << "Pilih operasi (1-5): ";
    cin >> pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    switch (pilihan) {
        case 1:
            cout << "Hasil Penjumlahan: " << Penjumlahan(a, b) << endl;
            break;
        case 2:
            cout << "Hasil Pengurangan: " << Pengurangan(a, b) << endl;
            break;
        case 3:
            cout << "Hasil Perkalian: " << Perkalian(a, b) << endl;
            break;
        case 4:
            cout << "Hasil Pembagian: " << Pembagian(a, b) << endl;
            break;
        case 5:
            cout << "Hasil Modulus: " << Modulus(a, b) << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
            break;
    }
}