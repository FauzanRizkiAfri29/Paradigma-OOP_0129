#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData(){
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Kategori          : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
    }
};  // batas class

int main(){
    Barang elektronik;      // object 1
    Barang nonElektronik;   // object 2

    // data barang elektronik
    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2025-01-10";

    // data barang non-elektronik
    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 5;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2024-12-01";

    // menampilkan data
    cout << "Data Barang Elektronik:" << endl;
    elektronik.printData();

    cout << "\nData Barang Non Elektronik:" << endl;
    nonElektronik.printData();
}