#include <iostream> 
using namespace std;

int main () {

    int pilihan = 2;

    // 1 Untuk Iya
    // 2 Untuk Tidak

   switch (pilihan) {
    case 1:
        cout << "Anda Mengiyakan \n";
        break;
    case 2:
        cout << "Anda Menolak \n";
        break;
    default:
        cout << "Pilihan Tidak Valid \n";
        break;
   }
   return 0;
}