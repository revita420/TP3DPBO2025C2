#ifndef KOMPUTERGAMING_CPP
#define KOMPUTERGAMING_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Komputer.cpp"
#include "Periferal.cpp"
#include "Software.cpp"
using namespace std;

// Hierarchical Inheritance - KomputerGaming mewarisi dari Komputer
class KomputerGaming : public Komputer {
private:
    vector<Periferal*> periferalList; // Composition dengan Array of Object Periferal
    vector<Software*> softwareList;   // Composition dengan Array of Object Software
    bool isOverclocked;
    float overclockRate;
    
public:
    KomputerGaming() : Komputer() {
        this->isOverclocked = false;
        this->overclockRate = 0.0;
    }
    
    KomputerGaming(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive,
                  vector<Periferal*> periferalList, vector<Software*> softwareList,
                  bool isOverclocked, float overclockRate) 
                  : Komputer(nama, cpu, ramList, harddrive) {
        this->periferalList = periferalList;
        this->softwareList = softwareList;
        this->isOverclocked = isOverclocked;
        this->overclockRate = overclockRate;
    }
    
    void setPeriferal(vector<Periferal*> periferalList) {
        this->periferalList = periferalList;
    }
    
    void setSoftware(vector<Software*> softwareList) {
        this->softwareList = softwareList;
    }
    
    void setIsOverclocked(bool isOverclocked) {
        this->isOverclocked = isOverclocked;
    }
    
    void setOverclockRate(float overclockRate) {
        this->overclockRate = overclockRate;
    }
    
    void addPeriferal(Periferal* periferal) {
        this->periferalList.push_back(periferal);
    }
    
    void addSoftware(Software* software) {
        this->softwareList.push_back(software);
    }
    
    vector<Periferal*> getPeriferal() {
        return this->periferalList;
    }
    
    vector<Software*> getSoftware() {
        return this->softwareList;
    }
    
    bool getIsOverclocked() {
        return this->isOverclocked;
    }
    
    float getOverclockRate() {
        return this->overclockRate;
    }
    
    // Override fungsi displayInfo dari kelas induk
    void displayInfo() {
        // Panggil fungsi displayInfo dari kelas induk
        Komputer::displayInfo();
        
        // Tambahkan informasi khusus KomputerGaming
        cout << "\nStatus Overclock: " << (isOverclocked ? "Ya" : "Tidak");
        if (isOverclocked) {
            cout << " (+" << overclockRate << "GHz)";
        }
        cout << endl;
        
        // Tampilkan daftar periferal
        cout << "\nDaftar Periferal:" << endl;
        for (int i = 0; i < periferalList.size(); i++) {
            cout << i+1 << ". " << periferalList[i]->getJenis() 
                 << " - Koneksi: " << periferalList[i]->getKoneksi() << endl;
        }
        
        // Tampilkan daftar software
        cout << "\nDaftar Software:" << endl;
        for (int i = 0; i < softwareList.size(); i++) {
            cout << i+1 << ". " << softwareList[i]->getNama() 
                 << " v" << softwareList[i]->getVersi() 
                 << " by " << softwareList[i]->getDeveloper() << endl;
        }
    }
    
    ~KomputerGaming() {
        // Bersihkan memory untuk pointer
        for (auto periferal : periferalList) {
            delete periferal;
        }
        for (auto software : softwareList) {
            delete software;
        }
    }
};

#endif // KOMPUTERGAMING_CPP