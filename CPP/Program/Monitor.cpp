#ifndef MONITOR_CPP
#define MONITOR_CPP

#include <iostream>
#include <string>
#include "Periferal.cpp"
using namespace std;

class Monitor : public Periferal {
private:
    float ukuranInch;
    int refreshRate;
    string resolusi;
    
public:
    Monitor() {
    }
    
    Monitor(float ukuranInch, int refreshRate, string resolusi, string jenis, string koneksi) : Periferal(jenis, koneksi) {
        this->ukuranInch = ukuranInch;
        this->refreshRate = refreshRate;
        this->resolusi = resolusi;
    }
    
    void setUkuranInch(float ukuranInch) {
        this->ukuranInch = ukuranInch;
    }
    
    void setRefreshRate(int refreshRate) {
        this->refreshRate = refreshRate;
    }
    
    void setResolusi(string resolusi) {
        this->resolusi = resolusi;
    }
    
    float getUkuranInch() {
        return this->ukuranInch;
    }
    
    int getRefreshRate() {
        return this->refreshRate;
    }
    
    string getResolusi() {
        return this->resolusi;
    }
    
    ~Monitor() {
    }
};

#endif // MONITOR_CPP