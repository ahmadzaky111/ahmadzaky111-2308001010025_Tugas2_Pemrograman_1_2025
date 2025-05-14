#include <stdio.h>

// Fungsi 1: Menampilkan pesan sambutan
void welcomeMessage() {
    printf("Selamat datang di program penghitungan nilai akhir!\n");
    printf("Program ini akan membantu Anda menghitung nilai akhir berdasarkan nilai UTS dan UAS.\n");
}

// Fungsi 2: Menampilkan NPM dan kuadratnya
void printStudentID(int npm) {
    printf("NPM Anda adalah: %d\n", npm);
    printf("Kuadrat dari NPM Anda adalah: %lld\n", (long long)npm * npm);
}

// Fungsi 3: Meminta pengguna memasukkan nilai ujian dan mengembalikannya
int inputExamScore() {
    int score;
    printf("Masukkan nilai ujian Anda: ");
    scanf("%d", &score);
    return score;
}

// Fungsi 4: Menghitung rata-rata dari dua nilai ujian dan mengembalikannya
float calculateFinalScore(int score1, int score2) {
    return (score1 + score2) / 2.0;
}

int main() {
    // Fungsi 1
    welcomeMessage();

    // Fungsi 2
    int npm = 25; // NPM Anda
    printStudentID(npm);

    // Fungsi 3
    int uts = inputExamScore();
    int uas = inputExamScore();

    // Fungsi 4
    float finalScore = calculateFinalScore(uts, uas);
    printf("Nilai akhir Anda adalah: %.2f\n", finalScore);

    return 0;
}