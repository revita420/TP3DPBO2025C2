#ifndef ANTIVIRUS_CPP
#define ANTIVIRUS_CPP

#include <iostream>
#include <string>
#include "Software.cpp"
using namespace std;

class Antivirus : public Software {
private:
    string tipeProteksi; // Real-time, On-demand, dll
    string tanggalExpired;
    
public:
    Antivirus() {
    }
    
    Antivirus(string tipeProteksi, string tanggalExpired, string nama, string versi, string developer) : Software(nama, versi, developer) {
        this->tipeProteksi = tipeProteksi;
        this->tanggalExpired = tanggalExpired;
    }
    
    void setTipeProteksi(string tipeProteksi) {
        this->tipeProteksi = tipeProteksi;
    }
    
    void setTanggalExpired(string tanggalExpired) {
        this->tanggalExpired = tanggalExpired;
    }
    
    string getTipeProteksi() {
        return this->tipeProteksi;
    }
    
    string getTanggalExpired() {
        return this->tanggalExpired;
    }
    
    ~Antivirus() {
    }
};

#endif // ANTIVIRUS_CPP