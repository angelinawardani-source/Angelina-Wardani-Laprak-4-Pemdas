#include <iostream>
using namespace std;

int main() {
    const int baris = 2;
    const int kolom = 3;

    int arr1[baris][kolom] = { {1, 2, 3}, {4, 5, 6} };
    int arr2[baris][kolom] = { {6, 7, 8}, {9, 1, 2} };
    int tambah[baris][kolom], kurang[baris][kolom];

    // Proses penjumlahan & pengurangan
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            tambah[i][j] = arr1[i][j] + arr2[i][j];
            kurang[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    // Cetak matriks arr1
    cout << "Matriks A:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // Cetak matriks arr2
    cout << "\nMatriks B:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // Cetak hasil penjumlahan
    cout << "\nHasil Penjumlahan Matriks (A + B):" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << tambah[i][j] << " ";
        }
        cout << endl;
    }

    // Cetak hasil pengurangan
    cout << "\nHasil Pengurangan Matriks (A - B):" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << kurang[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

