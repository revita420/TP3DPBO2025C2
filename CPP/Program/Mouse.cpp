#ifndef MOUSE_CPP
#define MOUSE_CPP

#include <iostream>
#include <string>
#include "Periferal.cpp"
using namespace std;

class Mouse : public Periferal {
private:
    int dpi;
    int jumlahButton;
    
public:
    Mouse() {
    }
    
    Mouse(int dpi, int jumlahButton, string jenis, string koneksi) : Periferal(jenis, koneksi) {
        this->dpi = dpi;
        this->jumlahButton = jumlahButton;
    }
    
    void setDpi(int dpi) {
        this->dpi = dpi;
    }
    
    void setJumlahButton(int jumlahButton) {
        this->jumlahButton = jumlahButton;
    }
    
    int getDpi() {
        return this->dpi;
    }
    
    int getJumlahButton() {
        return this->jumlahButton;
    }
    
    ~Mouse() {
    }
};

#endif