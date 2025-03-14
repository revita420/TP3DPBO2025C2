#ifndef RGBCONTROLLER_CPP
#define RGBCONTROLLER_CPP

#include <iostream>
#include <string>
using namespace std;

class RGBController {
private:
    string warna;
    int brightLevel;
    bool isOn;
    
public:
    RGBController() {
        this->isOn = false;
        this->brightLevel = 50;
        this->warna = "Rainbow";
    }
    
    RGBController(string warna, int brightLevel, bool isOn) {
        this->warna = warna;
        this->brightLevel = brightLevel;
        this->isOn = isOn;
    }
    
    void setWarna(string warna) {
        this->warna = warna;
    }
    
    void setBrightLevel(int brightLevel) {
        if (brightLevel >= 0 && brightLevel <= 100) {
            this->brightLevel = brightLevel;
        }
    }
    
    void setIsOn(bool isOn) {
        this->isOn = isOn;
    }
    
    string getWarna() {
        return this->warna;
    }
    
    int getBrightLevel() {
        return this->brightLevel;
    }
    
    bool getIsOn() {
        return this->isOn;
    }
    
    void toggleRGB() {
        this->isOn = !this->isOn;
        cout << "RGB " << (this->isOn ? "diaktifkan" : "dinonaktifkan") << endl;
    }
    
    ~RGBController() {
    }
};

#endif // RGBCONTROLLER_CPP