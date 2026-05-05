#include <iostream>
#include "temp.h"
using namespace std;

void menuFahrenheit() {
    int pilihan;
    double celsius, reamur, kelvin;
    cout << "===Menu Konversi ke Fahrenheit===\n";
    cout << "Silahkan memilih satuan temperatur yang ingin dikonversi ke Fahrenheit: \n";
    cout << "1. Celsius\n";
    cout << "2. Kelvin\n";
    cout << "3. Reamur\n";
    cout << "0. Exit\n";
    cout << "Pilih: "; cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Masukkan suhu dalam Celsius: "; cin >> celsius;
            cout << "Suhu dalam Fahrenheit: " << (celsius * 9.0/5.0) + 32 << " °F" << endl;
            break;
        case 2:
            cout << "Masukkan suhu dalam Kelvin: "; cin >> kelvin;
            cout << "Suhu dalam Fahrenheit: " << ((kelvin - 273.15) * 9.0/5.0) + 32 << " °F" << endl;
            break;
        case 3:
            cout << "Masukkan suhu dalam Reamur: "; cin >> reamur;
            cout << "Suhu dalam Fahrenheit: " << (reamur * 9.0/4.0) + 32 << " °F" << endl;
            break;
        case 0:
            cout << "Keluar dari menu konversi ke Fahrenheit.\n";
            break;
        default:
            cout << "Pilihan tidak valid, silakan coba lagi.\n";
            menuFahrenheit();
            break;
    }
}