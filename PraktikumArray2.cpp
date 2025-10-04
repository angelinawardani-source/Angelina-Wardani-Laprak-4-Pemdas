#include <iostream>
using namespace std;

int main() {
    const int baris = 2;
    const int kolom = 3;

    int A[baris][kolom] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[baris][kolom] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    // matriks gabungan (2 kali jumlah baris)
    int gabung[baris * 2][kolom];

    // --- Cetak matriks A ---
    cout << "Matriks A:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // --- Cetak matriks B ---
    cout << "\nMatriks B:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // --- Isi matriks gabungan ---
    // copy A
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            gabung[i][j] = A[i][j];
        }
    }
    // copy B (mulai dari baris setelah A)
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            gabung[baris + i][j] = B[i][j];
        }
    }

    // --- Cetak matriks gabungan ---
    cout << "\nMatriks Gabungan:" << endl;
    for (int i = 0; i < baris * 2; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << gabung[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

