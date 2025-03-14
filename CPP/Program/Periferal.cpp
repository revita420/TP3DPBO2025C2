#ifndef PERIFERAL_CPP
#define PERIFERAL_CPP

#include <iostream>
#include <string>
using namespace std;

class Periferal {
private:
    string jenis;
    string koneksi; // USB, Bluetooth, Wireless, dll
    
public:
    Periferal() {
    }
    
    Periferal(string jenis, string koneksi) {
        this->jenis = jenis;
        this->koneksi = koneksi;
    }
    
    void setJenis(string jenis) {
        this->jenis = jenis;
    }
    
    void setKoneksi(string koneksi) {
        this->koneksi = koneksi;
    }
    
    string getJenis() {
        return this->jenis;
    }
    
    string getKoneksi() {
        return this->koneksi;
    }
    
    ~Periferal() {
    }
};

#endif // PERIFERAL_CPP