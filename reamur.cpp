#include <iostream>
#include "temp.h"
using namespace std;

void menuReamur() {
    int pilihan;
    double celsius, fahrenheit, kelvin;
    cout << "===Menu Konversi ke Reamur===\n";
    cout << "Silahkan memilih satuan temperatur yang ingin dikonversi ke Reamur: \n";
    cout << "1. Celsius\n";
    cout << "2. Fahrenheit\n";
    cout << "3. Kelvin\n";
    cout << "0. Exit\n";
    cout << "Pilih: "; cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Masukkan suhu dalam Celsius: "; cin >> celsius;
            cout << "Suhu dalam Reamur: " << celsius * 4.0/5.0 << " °R" << endl;
            break;
        case 2:
            cout << "Masukkan suhu dalam Fahrenheit: "; cin >> fahrenheit;
            cout << "Suhu dalam Reamur: " << (fahrenheit - 32) * 4.0/9.0 << " °R" << endl;
            break;
        case 3:
            cout << "Masukkan suhu dalam Kelvin: "; cin >> kelvin;
            cout << "Suhu dalam Reamur: " << (kelvin - 273.15) * 4.0/5.0 << " °R" << endl;
            break;
        case 0:
            cout << "Keluar dari menu konversi ke Reamur.\n";
            break;
        default:
            cout << "Pilihan tidak valid, silakan coba lagi.\n";
            menuReamur();
            break;
    }
}