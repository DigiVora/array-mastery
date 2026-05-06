#include <iostream>
#include <iomanip>
#include <string>
// Project Data Nilai Siswa

using namespace std;

int main() {
    int i;
    string nama[3];
    float nilai1[3];
    float nilai2[3];
    float hasil[3];

    for (i = 0; i < 3; i++) {
        cout << "Data ke-" << i + 1 << endl;
        cout << "Masukkan nama   : ";
        cin >> nama[i];
        cout << "Masukkan nilai1 : ";
        cin >> nilai1[i];
        cout << "Masukkan nilai2 : ";
        cin >> nilai2[i];
        
        hasil[i] = (nilai1[i] + nilai2[i]) / 2;
        cout << endl;
    }

    system("cls");

    cout << "===============================================\n";
    cout << "               DATA NILAI SISWA                \n";
    cout << "===============================================\n";
    cout << "| " << left << setw(3)  << "No" 
         << "| " << setw(14) << "Nama" 
         << "| " << setw(6)  << "UTS" 
         << "| " << setw(6)  << "UAS" 
         << "| " << setw(6)  << "Hasil" << " |" << endl;
    cout << "===============================================\n";
    cout << fixed << setprecision(1);

    for (i = 0; i < 3; i++) {
        cout << "| " << left << setw(3)  << i + 1 
             << "| " << setw(14) << nama[i] 
             << "| " << setw(6)  << nilai1[i] 
             << "| " << setw(6)  << nilai2[i] 
             << "| " << setw(6)  << hasil[i] << " |" << endl;
    }
    cout << "===============================================\n";

    return 0;
}
