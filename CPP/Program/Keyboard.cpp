#ifndef KEYBOARD_CPP
#define KEYBOARD_CPP

#include <iostream>
#include <string>
#include "Periferal.cpp"
using namespace std;

class Keyboard : public Periferal {
private:
    string tipeSwitch; // Mechanical, Membrane, dll
    bool isRGB;
    
public:
    Keyboard() {
    }
    
    Keyboard(string tipeSwitch, bool isRGB, string jenis, string koneksi) : Periferal(jenis, koneksi) {
        this->tipeSwitch = tipeSwitch;
        this->isRGB = isRGB;
    }
    
    void setTipeSwitch(string tipeSwitch) {
        this->tipeSwitch = tipeSwitch;
    }
    
    void setIsRGB(bool isRGB) {
        this->isRGB = isRGB;
    }
    
    string getTipeSwitch() {
        return this->tipeSwitch;
    }
    
    bool getIsRGB() {
        return this->isRGB;
    }
    
    ~Keyboard() {
    }
};

#endif // KEYBOARD_CPP