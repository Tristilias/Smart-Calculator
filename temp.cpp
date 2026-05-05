#include <iostream>
#include "temp.h"
using namespace std;

void menuTemp() {
    int pilihan;
    
    cout << "===Menu Temperatur===\n";
    cout << "Silahkan memilih satuan temperatur yang tersedia:\n";
    cout << "1. Kelvin\n";
    cout << "2. Fahrenheit\n";
    cout << "3. Reamur\n";
    cout << "4. Celsius\n";
    cout << "0. Exit\n";
    cout << "Pilih: "; cin >> pilihan;

    switch(pilihan) {
        case 1:
            menuKelvin(); // Panggil fungsi konversi ke Kelvin di temp.h
            break;
        case 2:
            menuFahrenheit(); // Panggil fungsi konversi ke Fahrenheit di temp.h
            break;
        case 3:
            menuReamur(); // Panggil fungsi konversi ke Reamur di temp.h
            break;
        case 4:
            menuCelsius(); // Panggil fungsi konversi ke Celsius di temp.h
            break;
        case 0:
            cout << "Keluar dari menu Temperatur.\n";
            break;
        default:
            cout << "Pilihan tidak valid, silakan coba lagi.\n";
            menuTemp();
            break;
    }
}