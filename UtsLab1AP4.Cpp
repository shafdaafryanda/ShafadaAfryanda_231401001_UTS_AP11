#include <iostream>
#include <cmath>
int main() {
    int n;  
    system("CLS");
    std::cout << "Masukkan sebuah angka: ";
    std::cin >> n;
    if (n <= 1) {
        std::cout << n << " bukanlah bilangan prima.";
    } else {
        bool isPrima = true;
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                isPrima = false;
                break;
            }
        }

        if (isPrima) {
            std::cout << n << " merupakan bilangan prima.";
        } else {
            std::cout << n << " bukanlah bilangan prima.";
        }
    }
    return 0;
}
//Direktif preprosesor #Include <Stdio.H> seharusnya menjadi #include <iostream>.
//#inlcude "math.h" harus menjadi #include <cmath>.
//float main(void) seharusnya menjadi int main().
//SYSTEM("CLS"): seharusnya menjadi system("CLS");.
//cout dan cin harus diawali dengan std::.
//Perlu deklarasi variabel n sebelum menggunakannya.
//Perlu pengecekan untuk bilangan 1 yang seharusnya tidak dianggap bilangan prima.
//Pengecekan dalam loop for memiliki kesalahan logika.
//Pemanggilan cout yang tidak konsisten.
//Sebaiknya nilai kembali dari main adalah 0, karena itu menunjukkan bahwa program telah berjalan dengan sukses.