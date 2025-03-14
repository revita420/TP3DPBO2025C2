#ifndef KOMPUTER_CPP
#define KOMPUTER_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
using namespace std;

class Komputer {
private:
    string nama;
    Cpu cpu;
    vector<Ram> ramList;
    Harddrive harddrive;
    
public:
    Komputer() {
    }
    
    Komputer(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive) {
        this->nama = nama;
        this->cpu = cpu;
        this->ramList = ramList;
        this->harddrive = harddrive;
    }
    
    void setNama(string nama) {
        this->nama = nama;
    }
    
    void setCpu(Cpu cpu) {
        this->cpu = cpu;
    }
    
    void setRam(vector<Ram> ramList) {
        this->ramList = ramList;
    }
    
    void setHarddrive(Harddrive harddrive) {
        this->harddrive = harddrive;
    }
    
    void addRam(Ram ram) {
        this->ramList.push_back(ram);
    }
    
    string getNama() {
        return this->nama;
    }
    
    Cpu getCpu() {
        return this->cpu;
    }
    
    vector<Ram> getRamList() {
        return this->ramList;
    }
    
    Harddrive getHarddrive() {
        return this->harddrive;
    }
    
    void displayInfo() {
        cout << "Informasi Komputer:" << endl;
        cout << "Nama : " << this->nama << endl;
        cout << "Cpu : " << this->cpu.getMerk() << ' ' << this->cpu.getNama() 
             << " (" << this->cpu.getJumlahCore() << " Core) " 
             << "~" << this->cpu.getKecepatanGHz() << "GHz" << endl;
        
        cout << "RAM :" << endl;
        for (Ram& ram : this->ramList) {
            cout << "- " << ram.getMerk() << ' ' << ram.getNama() 
                 << " (" << ram.getKapasitasGB() << " GB) " 
                 << ram.getDdr() << endl;
        }
        
        cout << "Harddrive : " << this->harddrive.getTipeDrive() << ' ' 
             << this->harddrive.getMerk() << ' ' << this->harddrive.getNama() 
             << " (" << this->harddrive.getKapasitasGB() << " GB) " << endl;
    }
    
    ~Komputer() {
    }
};

#endif // KOMPUTER_CPP