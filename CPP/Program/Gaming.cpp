#ifndef GAMING_CPP
#define GAMING_CPP

#include <iostream>
#include <string>
#include "Software.cpp"
using namespace std;

class Gaming : public Software {
private:
    int fps;
    string genre;
    
public:
    Gaming() {
    }
    
    Gaming(int fps, string genre, string nama, string versi, string developer) : Software(nama, versi, developer) {
        this->fps = fps;
        this->genre = genre;
    }
    
    void setFps(int fps) {
        this->fps = fps;
    }
    
    void setGenre(string genre) {
        this->genre = genre;
    }
    
    int getFps() {
        return this->fps;
    }
    
    string getGenre() {
        return this->genre;
    }
    
    ~Gaming() {
    }
};

#endif // GAMING_CPP