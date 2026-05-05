#include <iostream>
#include "temp.h"
using namespace std;

void menuKelvin() {
    int pilihan;
    double celsius, fahrenheit, reamur;
    cout << "===Menu Konversi ke Kelvin===\n";
    cout << "Silahkan memilih satuan temperatur yang ingin dikonversi ke Kelvin: \n";
    cout << "1. Celsius\n";
    cout << "2. Fahrenheit\n";
    cout << "3. Reamur\n";
    cout << "0. Exit\n";
    cout << "Pilih: "; cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Masukkan suhu dalam Celsius: "; cin >> celsius;
            cout << "Suhu dalam Kelvin: " << celsius + 273.15 << " K" << endl;
            break;
        case 2:
            cout << "Masukkan suhu dalam Fahrenheit: "; cin >> fahrenheit;
            cout << "Suhu dalam Kelvin: " << (fahrenheit - 32) * 5.0/9.0 + 273.15 << " K" << endl;
            break;
        case 3:
            cout << "Masukkan suhu dalam Reamur: "; cin >> reamur;
            cout << "Suhu dalam Kelvin: " << reamur * 5.0/4.0 + 273.15 << " K" << endl;
            break;
        case 0:
            cout << "Keluar dari menu konversi ke Kelvin.\n";
            break;
        default:
            cout << "Pilihan tidak valid, silakan coba lagi.\n";
            menuKelvin();
            break;
    }
}