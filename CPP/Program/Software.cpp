#ifndef SOFTWARE_CPP
#define SOFTWARE_CPP

#include <iostream>
#include <string>
using namespace std;

class Software {
private:
    string nama;
    string versi;
    string developer;
    
public:
    Software() {
    }
    
    Software(string nama, string versi, string developer) {
        this->nama = nama;
        this->versi = versi;
        this->developer = developer;
    }
    
    void setNama(string nama) {
        this->nama = nama;
    }
    
    void setVersi(string versi) {
        this->versi = versi;
    }
    
    void setDeveloper(string developer) {
        this->developer = developer;
    }
    
    string getNama() {
        return this->nama;
    }
    
    string getVersi() {
        return this->versi;
    }
    
    string getDeveloper() {
        return this->developer;
    }
    
    ~Software() {
    }
};

#endif // SOFTWARE_CPP