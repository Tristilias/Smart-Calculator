#include <iostream>
#include <cmath>
#include "luas.h"
#define ll long long
using namespace std;

constexpr double pi = 3.14159265358979323846;

void menuLuas() {
  int pilihan; 
  ll s, p, l, t, a, r, ss, dia1, dia2;
  cout << "====Menu  Luas====";
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
      cout << "Silahkan Isi Sisi Persegi: \n";
      cout << "sisi: "; cin >> s; 
      cout << "hasil: " << pow(s, 2) << '\n'; // sisi ^ 2;
      break; 
    case 2: 
      cout << "Silahkan isi Panjang dan Lebar Persegi Panjang: \n\n";
      cout << "Panjang: "; cin >> p;
      cout << "Lebar: "; cin >> l;
      cout << "hasil: " << p * l << '\n';
      break;
    case 3: 
      cout << "Silahkan Isi Alas dan Tinggi Segitiga: \n";
      cout << "Alas: "; cin >> a;
      cout << "Tinggi: "; cin >> t;
      cout << "hasil: " << (double) a * t * 0.5 << '\n'; 
      break;
    case 4: 
      cout << "Silahkan Isi Jari-jari Lingkaran: \n";
      cout << "Jari-Jari: "; cin >> r;
      cout << "hasil: " << pi * pow(r, 2)<< '\n'; 
      break;
    case 5: 
      cout << "Silahkan Isi Banyak Sisi Sejajar dan Tinggi Trapesium: \n";
      cout << "Banyak sisi sejajar: "; cin >> ss;
       cout << "Tinggi: "; cin >> t;
      cout <<  "hasil: " <<(double) ss * t * 0.5 << '\n'; 
      break;
    case 6: 
      cout << "Silahkan Isi Alas Dan Tinggi Jajar Genjang: \n";
       cout << "Alas: "; cin >> a; 
       cout << "Tinggi: "; cin >> t; 
      cout << "hasil: " << a * t << '\n'; 
      break;
    case 7: 
      cout << "Silahkan Isi Diagonal 1 dan Diagonal 2 Belah Ketupat /Layang-Layang: \n";
       cout << "Diagonal 1: "; cin >> dia1; 
       cout << "Diagonal 2: "; cin >> dia2; 
      cout <<  "hasil: " << 0.5 * dia1 * dia2  << '\n'; 
      break;
    default: 
      cout << "Masukan tidak valid, silahkan coba lagi\n"; 
      menuLuas(); 
      break;
  } 


}
