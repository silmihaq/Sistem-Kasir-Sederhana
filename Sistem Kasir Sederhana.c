#include <stdio.h>

int main() {
    int jumlahBarang, i;
    float harga, total = 0.0, bayar, kembalian;
    int qty;

    printf("=== Program Kasir Sederhana ===\n");
    printf("Masukkan jumlah jenis barang yang dibeli: ");
    scanf("%d", &jumlahBarang);

    for(i = 1; i <= jumlahBarang; i++) {
        printf("\nBarang ke-%d\n", i);
        printf("Masukkan harga satuan: ");
        scanf("%f", &harga);

        printf("Masukkan jumlah barang: ");
        scanf("%d", &qty);

        total += harga * qty;
    }

    printf("\nTotal harga yang harus dibayar: %.2f\n", total);

    printf("Masukkan jumlah uang yang dibayar: ");
    scanf("%f", &bayar);

    if(bayar >= total) {
        kembalian = bayar - total;
        printf("Pembayaran diterima.\n");
        printf("Kembalian: %.2f\n", kembalian);
    } else {
        printf("Uang yang dibayar kurang! Silakan bayar lagi.\n");
    }

    printf("Terima kasih telah berbelanja!\n");

    return 0;
}