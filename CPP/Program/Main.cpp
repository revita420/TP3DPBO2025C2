#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"
#include "KomputerGaming.cpp"
#include "Periferal.cpp"
#include "Mouse.cpp"
#include "Keyboard.cpp"
#include "Monitor.cpp"
#include "Software.cpp"
#include "OS.cpp"
#include "Antivirus.cpp"
#include "Gaming.cpp"
#include "RGBController.cpp"
#include "KeyboardGaming.cpp"

using namespace std;

int main() {
    // Pembuatan objek komponen dasar
    Cpu cpu(12, 3.8, "Intel", "Core i7-12700K");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Ram ram2(16, "DDR5", "Corsair", "Vengeance");
    Harddrive harddrive(2000, "NVMe SSD", "Samsung", "980 Pro");
    
    // Pembuatan objek periferal
    Mouse* mouse = new Mouse(16000, 8, "Gaming Mouse", "USB");
    Keyboard* keyboard = new Keyboard("Mechanical", true, "Gaming Keyboard", "USB");
    Monitor* monitor = new Monitor(27, 165, "2560x1440", "Gaming Monitor", "DisplayPort");
    
    // Pembuatan objek software
    OS* os = new OS("64-bit", "Windows NT", "Windows 11", "22H2", "Microsoft");
    Antivirus* antivirus = new Antivirus("Real-time", "2025-12-31", "Norton", "2023", "Symantec");
    Gaming* game1 = new Gaming(144, "FPS", "Counter-Strike 2", "1.0", "Valve");
    Gaming* game2 = new Gaming(60, "RPG", "Elden Ring", "1.1", "FromSoftware");
    
    // Pembuatan vektor untuk periferal dan software
    vector<Periferal*> periferals;
    periferals.push_back(mouse);
    periferals.push_back(keyboard);
    periferals.push_back(monitor);
    
    vector<Software*> softwares;
    softwares.push_back(os);
    softwares.push_back(antivirus);
    softwares.push_back(game1);
    softwares.push_back(game2);
    
    // Pembuatan objek komputer gaming
    vector<Ram> rams = {ram1, ram2};
    KomputerGaming gamingPC("ROG Strix Gaming PC", cpu, rams, harddrive, periferals, softwares, true, 0.5);
    
    // Menampilkan informasi komputer gaming
    cout << "\n===== INFORMASI KOMPUTER GAMING =====\n" << endl;
    gamingPC.displayInfo();
    
    // Pembuatan objek keyboard gaming (multiple inheritance)
    KeyboardGaming kbGaming("Cherry MX Red", true, "TKL Gaming Keyboard", "USB", 
                          "Red", 80, true, 1000, true);
    
    cout << "\n\n===== INFORMASI KEYBOARD GAMING =====\n" << endl;
    kbGaming.displayInfo();
    
    // Mengubah status RGB pada keyboard gaming
    cout << "\nMengubah status RGB pada keyboard gaming..." << endl;
    kbGaming.toggleRGB();
    cout << "Status RGB sekarang: " << (kbGaming.getIsOn() ? "Aktif" : "Nonaktif") << endl;
    
    // Menambahkan RAM pada komputer gaming
    cout << "\nMenambahkan RAM baru pada komputer gaming..." << endl;
    Ram ram3(32, "DDR5", "Kingston", "Fury Beast");
    gamingPC.addRam(ram3);
    
    // Menambahkan periferal baru pada komputer gaming
    cout << "Menambahkan periferal baru pada komputer gaming..." << endl;
    Periferal* headset = new Periferal("Gaming Headset", "USB");
    gamingPC.addPeriferal(headset);
    
    // Menambahkan software baru pada komputer gaming
    cout << "Menambahkan software baru pada komputer gaming..." << endl;
    Gaming* game3 = new Gaming(60, "Adventure", "The Witcher 3", "1.32", "CD Projekt Red");
    gamingPC.addSoftware(game3);
    
    // Menampilkan informasi terbaru komputer gaming
    cout << "\n===== INFORMASI TERBARU KOMPUTER GAMING =====\n" << endl;
    gamingPC.displayInfo();
    
    return 0;
}