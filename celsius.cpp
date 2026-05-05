#include <iostream>
#include "temp.h"
using namespace std;

void menuCelsius() {
    int pilihan;
    double fahrenheit, reamur, kelvin;
    cout << "===Menu Konversi ke Celsius===\n";
    cout << "Silahkan memilih satuan temperatur yang ingin dikonversi ke Celsius: \n";
    cout << "1. Kelvin\n";
    cout << "2. Fahrenheit\n";
    cout << "3. Reamur\n";
    cout << "0. Exit\n";
    cout << "Pilih: "; cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Masukkan suhu dalam Kelvin: "; cin >> kelvin;
            cout << "Suhu dalam Celsius: " << kelvin - 273.15 << " °C" << endl;
            break;
        case 2:
            cout << "Masukkan suhu dalam Fahrenheit: "; cin >> fahrenheit;
            cout << "Suhu dalam Celsius: " << (fahrenheit - 32) * 5.0/9.0 << " °C" << endl;
            break;
        case 3:
            cout << "Masukkan suhu dalam Reamur: "; cin >> reamur;
            cout << "Suhu dalam Celsius: " << reamur * 5.0/4.0 << " °C" << endl;
            break;
        case 0:
            cout << "Keluar dari menu konversi ke Celsius.\n";
            break;
        default:
            cout << "Pilihan tidak valid, silakan coba lagi.\n";
            menuCelsius();
            break;
    }
}