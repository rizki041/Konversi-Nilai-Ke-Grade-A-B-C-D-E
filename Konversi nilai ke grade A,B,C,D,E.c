#include <stdio.h>

typedef enum {
    A,
    B,
    C,
    D,
    E
} Grade;

int main() {
    int nilai;
    Grade grade;

    printf("Masukkan nilai angka (0-100): ");
    scanf("%d", &nilai);

    if (nilai >= 85 && nilai <= 100) {
        grade = A;
    } else if (nilai >= 70 && nilai < 85) {
        grade = B;
    } else if (nilai >= 55 && nilai < 70) { 
        grade = C;
    } else if (nilai >= 40 && nilai < 55) {
        grade = D;
    } else if (nilai >= 0 && nilai < 40) {
        grade = E;
    } else {
        printf("Nilai tidak valid! Masukkan angka antara 0 - 100.\n");
        return 1;
    }

    printf("Hasil Keterangan: ");
    switch (grade) {
        case A:
            printf("Grade A - Sangat Baik\n");
            break;
        case B:
            printf("Grade B - Baik\n");
            break;
        case C:
            printf("Grade C - Cukup\n");
            break;
        case D:
            printf("Grade D - Kurang\n");
            break;
        case E:
            printf("Grade E - Sangat Kurang / Tidak Lulus\n");
            break;
        default:
            printf("Grade tidak dikenal.\n");
            break;
    }

    return 0;
}