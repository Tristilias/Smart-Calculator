#include <iostream>
#include <cmath>
#include "bangundatar.h"
using ll = long long;
using namespace std;

constexpr double pi = 3.14159265358979323846;

void menuKeliling() {
    int pilihan; 
  ll s, p, l, a, b, c, d, r;
  cout << "====Menu Keliling====\n";
  cout << "Silahkan memilih bangun datar yang tersedia: \n";
  cout << "1. Persegi\n"; 
  cout << "2. Persegi Panjang\n";
  cout << "3. Segitiga\n";
  cout << "4. Lingkaran\n";
  cout << "5. Trapesium\n";
  cout << "6. Jajar Genjang\n";
  cout << "7. Belah Ketupat/Layang - Layang\n";
  cout << "0. Exit\n";
  cin >> pilihan;

  switch(pilihan) {
    case 1:
        cout << "Isi Sisi Persegi: \n";
        cout << "sisi: "; cin >> s;
        cout << "hasil: " << 4 * s << '\n'; // 4 * sisi
        break;
    case 2:
        cout << "Isi Panjang dan Lebar Persegi Panjang: \n";
        cout << "Panjang: "; cin >> p;
        cout << "Lebar: "; cin >> l;
        cout << "Hasil: " << 2 * (p + l) << endl; // 2 * (panjang + lebar)
        break;
    case 3:
        cout << "Isi sisi-sisi Segitiga: \n";
        cout << "Sisi 1: "; cin >> a;
        cout << "Sisi 2: "; cin >> b;
        cout << "Sisi 3: "; cin >> c;
        cout << "Hasil: " << a + b + c << endl;
        break;
    case 4:
        cout << "Isi Jari-jari Lingkaran: \n";
        cout << "Jari-Jari: "; cin >> r;
        cout << "Hasil: " << 2 * pi * r << endl; // 2 * pi * jari-jari
        break;
    case 5:
        cout << "Isi Sisi-sisi Trapesium: \n";
        cout << "Sisi 1: "; cin >> a;
        cout << "Sisi 2: "; cin >> b;
        cout << "Sisi 3: "; cin >> c;
        cout << "Sisi 4: "; cin >> d;
        cout << "Hasil: " << a + b + c + d << endl;
        break;
    case 6:
        cout << "Isi Sisi-sisi Jajar Genjang: \n";
        cout << "Sisi 1: "; cin >> a;
        cout << "Sisi 2: "; cin >> b;
        cout << "Hasil: " << 2 * (a + b) << endl; // 2 * (sisi 1 + sisi 2)
        break;
    case 7:
        cout << "Isi Sisi-sisi Belah Ketupat /Layang-Layang: \n";
        cout << "Sisi 1: "; cin >> a;
        cout << "Sisi 2: "; cin >> b;
        cout << "Sisi 3: "; cin >> c;
        cout << "Sisi 4: "; cin >> d;
        cout << "Hasil: " << a + b + c + d << endl;
        break;
    default:
        cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
  }
}