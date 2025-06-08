#include <stdio.h>      // Library untuk input/output standar
#include <math.h>       // Library untuk fungsi matematika (sqrt)

#define DT 0.01         // Langkah waktu (delta t) untuk integrasi numerik
#define T_MAX 10.0      // Waktu maksimum simulasi

// Fungsi untuk menghitung turunan kecepatan terhadap waktu (dv/dt)
// v: kecepatan saat ini, m: massa, g: gravitasi, c: koefisien hambatan udara
double dvdt(double v, double m, double g, double c) {
    return (m * g - c * v * v) / m;
}

int main() {
    double m = 68.1;    // Massa benda (kg)
    double g = 9.8;     // Percepatan gravitasi (m/s^2)
    double c = 12.5;    // Koefisien hambatan udara
    double v = 0.0;     // Kecepatan awal (m/s)
    double t = 0.0;     // Waktu awal (s)

    printf("t\tv(t)\n");    // Header output

    // Loop utama untuk integrasi numerik menggunakan metode Runge-Kutta orde 4
    while (t <= T_MAX) {
        printf("%.2f\t%.6f\n", t, v);   // Cetak waktu dan kecepatan saat ini

        // Hitung nilai k1, k2, k3, k4 untuk metode Runge-Kutta
        double k1 = DT * dvdt(v, m, g, c);
        double k2 = DT * dvdt(v + 0.5 * k1, m, g, c);
        double k3 = DT * dvdt(v + 0.5 * k2, m, g, c);
        double k4 = DT * dvdt(v + k3, m, g, c);

        // Update nilai kecepatan dengan hasil Runge-Kutta
        v = v + (k1 + 2*k2 + 2*k3 + k4) / 6.0;
        t += DT;    // Update waktu
    }

    // Hitung kecepatan terminal secara teoritis
    double vt = sqrt(m * g / c);
    printf("\nKecepatan terminal teoritis: %.6f m/s\n", vt);

    return 0;
}