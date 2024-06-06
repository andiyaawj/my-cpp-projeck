#include <iostream>
#include <string>

int main() {
    // Deklarasi variabel untuk menyimpan masukan pengguna
    std::string perasaan;

    // Menampilkan pesan untuk meminta pengguna memasukkan isi perasaan mereka
    std::cout << "haloo perempuan yang aku suka dan gemari...aku boleh tanya gak?...kkamu uda punya pasangan belum? ";
    
    // Menggunakan std::getline untuk membaca satu baris penuh termasuk spasi
    std::getline(std::cin, perasaan);

    // Menampilkan kembali isi perasaan dengan tambahan teks
    std::cout << "kalo belum...apakah aku boleh menjadi yang menuntun masa depan mu" << perasaan << std::endl;

    // Mengakhiri program
    return 0;
}

