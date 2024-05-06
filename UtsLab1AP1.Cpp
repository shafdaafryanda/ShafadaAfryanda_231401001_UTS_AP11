#include <iostream>
int main() {
    int totalDetik;
    int jam, menit, detik;
    std::cout << "Masukkan waktu dalam detik: ";
    std::cin >> totalDetik;
    if (totalDetik < 0) {
        std::cout << "Input tidak dapat berupa angka negatif.\n";
        return 1;
    }
    jam = totalDetik / 3600;
    int sisaDetik = totalDetik % 3600;
    menit = sisaDetik / 60;
    detik = sisaDetik % 60;
    std::cout << "Waktu: ";
    if (jam < 10) std::cout << "0";
    std::cout << jam << ":";
    if (menit < 10) std::cout << "0";
    std::cout << menit << ":";
    if (detik < 10) std::cout << "0";
    std::cout << detik << std::endl;
    return 0;
}