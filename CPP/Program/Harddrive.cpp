#ifndef HARDDRIVE_CPP
#define HARDDRIVE_CPP

#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class Harddrive : public Komponen {
private:
    int kapasitasGB;
    string tipeDrive;
    
public:
    Harddrive() {
    }
    
    Harddrive(int kapasitasGB, string tipeDrive, string merk, string nama) : Komponen(merk, nama) {
        this->kapasitasGB = kapasitasGB;
        this->tipeDrive = tipeDrive;
    }
    
    void setKapasitasGB(int kapasitasGB) {
        this->kapasitasGB = kapasitasGB;
    }
    
    void setTipeDrive(string tipeDrive) {
        this->tipeDrive = tipeDrive;
    }
    
    int getKapasitasGB() {
        return this->kapasitasGB;
    }
    
    string getTipeDrive() {
        return this->tipeDrive;
    }
    
    ~Harddrive() {
    }
};

#endif // HARDDRIVE_CPP