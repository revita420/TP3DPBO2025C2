#ifndef OS_CPP
#define OS_CPP

#include <iostream>
#include <string>
#include "Software.cpp"
using namespace std;

class OS : public Software {
private:
    string arsitektur; // 32-bit, 64-bit
    string kernel;
    
public:
    OS() {
    }
    
    OS(string arsitektur, string kernel, string nama, string versi, string developer) : Software(nama, versi, developer) {
        this->arsitektur = arsitektur;
        this->kernel = kernel;
    }
    
    void setArsitektur(string arsitektur) {
        this->arsitektur = arsitektur;
    }
    
    void setKernel(string kernel) {
        this->kernel = kernel;
    }
    
    string getArsitektur() {
        return this->arsitektur;
    }
    
    string getKernel() {
        return this->kernel;
    }
    
    ~OS() {
    }
};

#endif // OS_CPP