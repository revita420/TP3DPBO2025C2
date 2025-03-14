#ifndef KEYBOARDGAMING_CPP
#define KEYBOARDGAMING_CPP

#include <iostream>
#include <string>
#include "Keyboard.cpp"
#include "RGBController.cpp"
using namespace std;

// Multiple Inheritance
class KeyboardGaming : public Keyboard, public RGBController {
private:
    int pollingRate;
    bool isNKRO; // N-Key Rollover
    
public:
    KeyboardGaming() {
    }
    
    // Constructor dengan parameter untuk semua atribut dari Keyboard, RGBController, dan KeyboardGaming
    KeyboardGaming(string tipeSwitch, bool isRGB, string jenis, string koneksi, 
                  string warna, int brightLevel, bool isOn, 
                  int pollingRate, bool isNKRO) 
                  : Keyboard(tipeSwitch, isRGB, jenis, koneksi), 
                    RGBController(warna, brightLevel, isOn) {
        this->pollingRate = pollingRate;
        this->isNKRO = isNKRO;
    }
    
    void setPollingRate(int pollingRate) {
        this->pollingRate = pollingRate;
    }
    
    void setIsNKRO(bool isNKRO) {
        this->isNKRO = isNKRO;
    }
    
    int getPollingRate() {
        return this->pollingRate;
    }
    
    bool getIsNKRO() {
        return this->isNKRO;
    }
    
    void displayInfo() {
        cout << "Keyboard Gaming:" << endl;
        cout << "Jenis: " << getJenis() << endl;
        cout << "Koneksi: " << getKoneksi() << endl;
        cout << "Tipe Switch: " << getTipeSwitch() << endl;
        cout << "RGB: " << (getIsRGB() ? "Ya" : "Tidak") << endl;
        cout << "RGB Status: " << (getIsOn() ? "Aktif" : "Nonaktif") << endl;
        cout << "RGB Warna: " << getWarna() << endl;
        cout << "RGB Brightness: " << getBrightLevel() << "%" << endl;
        cout << "Polling Rate: " << pollingRate << " Hz" << endl;
        cout << "N-Key Rollover: " << (isNKRO ? "Ya" : "Tidak") << endl;
    }
    
    ~KeyboardGaming() {
    }
};

#endif // KEYBOARDGAMING_CPP