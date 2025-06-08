# Simulasi Kecepatan Terminal Benda Jatuh Bebas dengan Metode Runge-Kutta Orde 4 (RK4)

## Deskripsi
Proyek ini merupakan simulasi numerik untuk menentukan kecepatan terminal pada gerak jatuh bebas dengan hambatan udara menggunakan metode Runge-Kutta Orde 4 (RK4). Program ditulis dalam bahasa C dan menyelesaikan persamaan diferensial nonlinier yang menggambarkan perubahan kecepatan akibat gaya gravitasi dan hambatan udara. Hasil simulasi menunjukkan perkembangan kecepatan benda hingga mencapai nilai terminal, serta membandingkannya dengan hasil analitik.

## Parameter Simulasi
- Massa (m): 68.1 kg
- Gravitasi (g): 9.8 m/s²
- Koefisien hambatan (c): 12.5 kg/s
- Kecepatan awal: 0 m/s
- Langkah waktu (dt): 0.01 s
- Durasi simulasi: 10 s

## Cara Menjalankan
1. Kompilasi program:
   ```
   gcc proyekuas.c -o proyekuas -lm
   ```
2. Jalankan program:
   ```
   ./proyekuas
   ```

## Output
Program akan menampilkan tabel waktu dan kecepatan benda pada setiap langkah, serta nilai kecepatan terminal hasil simulasi dan hasil teoritis.

## Penulis
Nama: Ahmad Fariz Khairi  
NPM: 2306211370

## Referensi
1. S. C. Chapra & R. P. Canale, *Numerical Methods for Engineers*, 7th Edition, McGraw-Hill, 2015.
2. J. D. Lambert, *Numerical Methods for Ordinary Differential Systems*, Wiley, 1991.
3. R. Nave, “Terminal Velocity,” HyperPhysics, Georgia State University. http://hyperphysics.phy-astr.gsu.edu/hbase/airfri2.html
4. GNU Scientific Library, “Runge-Kutta Methods for ODEs,” https://www.gnu.org/software/gsl/doc/html/ode-init.html