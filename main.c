#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Praktikum 4, Tugas No. 1
    printf("Praktikum 4, Tugas No. 1\n");
    printf("Program ini mengonversi suhu dari Celcius ke Farenheit.\n\n");

    float celcius;

    // Input suhu dalam Celcius
    printf("Masukkan suhu Celcius = ");
    scanf("%f", &celcius);

    // Mengonversi Celcius ke Farenheit dan menampilkan hasilnya
    printf("Konversi Celcius ke Farenheit = %.1f\n\n\n", celcius * 1.8 + 32);

    // -------------------------------------------------------------

    // Praktikum 4, Tugas No. 2
    printf("Praktikum 4, Tugas No. 2\n");
    printf("Program ini menghitung total gaji dengan berbagai tunjangan dan potongan.\n\n");

    float gaji_pokok,
          istri_suami,
          anak,
          tahun_kerja,
          hari_kerja,
          hasil_istrisuami,
          hasil_anak,
          pajak,
          hasil_gaji,
          total_gaji;

    // Input data gaji dan tunjangan
    printf("Jumlah gaji pokok = ");
    scanf("%f", &gaji_pokok);
    printf("Jumlah istri atau suami = ");
    scanf("%f", &istri_suami);
    printf("Jumlah anak = ");
    scanf("%f", &anak);
    printf("Jumlah hari bekerja (per bulan) = ");
    scanf("%f", &hari_kerja);
    printf("Lama bekerja (dalam tahun) = ");
    scanf("%f", &tahun_kerja);

    // Menghitung tunjangan istri/suami, anak, pajak, dan total gaji
    hasil_istrisuami = istri_suami * 0.1 * gaji_pokok; // Tunjangan istri/suami
    hasil_anak = anak * 0.05 * gaji_pokok; // Tunjangan anak
    pajak = 0.15 * (gaji_pokok + hasil_anak + hasil_istrisuami); // Pajak 15%
    hasil_gaji = gaji_pokok + (3000 * hari_kerja) + hasil_anak + hasil_istrisuami + (5000 * tahun_kerja); // Gaji sebelum potongan
    total_gaji = hasil_gaji - pajak - 20000; // Gaji setelah pajak dan asuransi

    // Menampilkan rincian gaji
    printf("-------------------------------------------------------------------------\n");
    printf("Gaji pokok\t\t\t= %.2f\n", gaji_pokok);
    printf("Tunjangan istri atau suami\t= %.2f\n", hasil_istrisuami);
    printf("Tunjangan anak\t\t\t= %.2f\n", hasil_anak);
    printf("Jumlah THR\t\t\t= %.2f\n", tahun_kerja * 5000);
    printf("Bantuan transportasi\t\t= %.2f\n", hari_kerja * 3000);
    printf("-------------------------------------------------------------------------\n");
    printf("Gaji per bulan (sebelum pajak dan asuransi)\t= %.2f\n", hasil_gaji);
    printf("Pajak\t\t\t\t\t\t= %.2f (-)\n", pajak);
    printf("Polisi asuransi\t\t\t\t\t= 20000 (-)\n");
    printf("-------------------------------------------------------------------------\n");
    printf("Gaji saat menerima THR (sudah termasuk THR-nya) setelah bekerja selama %.0f tahun = %.2f\n\n\n", tahun_kerja, total_gaji);

    // -------------------------------------------------------------

    // Praktikum 4, Tugas No. 3
    printf("Praktikum 4, Tugas No. 3\n");
    printf("Program ini menghitung harga total tiket dan bonus tiket yang diterima.\n\n");

    int tiket,
        bonus,
        sisa;

    // Input jumlah tiket yang dibeli
    printf("Jumlah tiket dibeli = ");
    scanf("%d", &tiket);

    // Menghitung bonus tiket dan sisa tiket
    bonus = tiket / 3; // Setiap 3 tiket mendapatkan 1 bonus tiket
    sisa = tiket % 3; // Sisa tiket yang tidak mendapatkan bonus

    // Menampilkan hasil harga total tiket
    printf("\n--------------------------------\n\n");
    printf("Total tiket (+ tiket bonus) = %d\n", bonus + tiket);
    printf("Harga = %d\n", bonus * 100000 + sisa * 50000);

    return 0;
}
