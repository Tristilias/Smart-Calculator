#include <iostream>
#include <cmath>
#include "bangun.h"
using namespace std;

constexpr double pi = 3.14159265358979323846;

void menuSurface() {
    int pilihan;
    double r, t, a, b, c;

    cout << "====Menu Surface Area====\n";
    cout << "Silahkan memilih bangun ruang yang tersedia: \n";
    cout << "1. Kubus\n";
    cout << "2. Balok\n";
    cout << "3. Tabung\n";
    cout << "4. Kerucut\n";
    cout << "5. Bola\n";
    cout << "0. Exit\n";
    cout << "Pilih: "; cin >> pilihan;
    
    switch(pilihan) {
        case 1:
            cout << "Masukkan sisi kubus: "; cin >> a;
            cout << "Surface Area kubus: " << 6 * pow(a, 2) << endl;
            break;
        case 2:
            cout << "Masukkan panjang balok: "; cin >> a;
            cout << "Masukkan lebar balok: "; cin >> b;
            cout << "Masukkan tinggi balok: "; cin >> c;
            cout << "Surface Area balok: " << 2 * (a * b + a * c + b * c) << endl;
            break;
        case 3:
            cout << "Masukkan jari-jari tabung: "; cin >> r;
            cout << "Masukkan tinggi tabung: "; cin >> t;
            cout << "Surface Area tabung: " << 2 * pi * r * (r + t) << endl;
            break;
        case 4:
            cout << "Masukkan jari-jari kerucut: "; cin >> r;
            cout << "Masukkan tinggi kerucut: "; cin >> t;
            cout << "Surface Area kerucut: " << pi * r * (r + sqrt(pow(r, 2) + pow(t, 2))) << endl;
            break;
        case 5:
            cout << "Masukkan jari-jari bola: "; cin >> r;
            cout << "Surface Area bola: " << 4 * pi * pow(r, 2) << endl;
            break;
        case 0:
            cout << "Keluar dari menu Surface Area.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
    }
}