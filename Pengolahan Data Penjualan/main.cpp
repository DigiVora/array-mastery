#include <iostream>
#include <iomanip>
//Project Pengolahan Data Penjualan

using namespace std;

int main() {
    int dataJual[3][3] = {
        {150, 159, 230},
        {100, 125, 150},
        {210, 125, 156}
    };
    
    cout << "=====================================" << endl;
    cout << "        DATA TAHUN PENJUALAN         " << endl;
    cout << "=====================================" << endl;
    
    cout << "| No |  2021  |  2022  |  2023  |" << endl;
    cout << "-------------------------------------" << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << "| " << i + 1 << "  | ";
        
        for (int j = 0; j < 3; j++) {
            cout << setw(6) << dataJual[i][j] << " | ";
        }
        cout << endl;
    }
    
    cout << "-------------------------------------" << endl;
    
    return 0;
}
