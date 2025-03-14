class Software:
    def __init__(self, nama="", versi="", developer=""):
        self.__nama = nama
        self.__versi = versi
        self.__developer = developer
    
    def set_nama(self, nama):
        self.__nama = nama
    
    def set_versi(self, versi):
        self.__versi = versi
    
    def set_developer(self, developer):
        self.__developer = developer
    
    def get_nama(self):
        return self.__nama
    
    def get_versi(self):
        return self.__versi
    
    def get_developer(self):
        return self.__developer