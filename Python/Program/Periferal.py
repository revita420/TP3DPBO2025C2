class Periferal:
    def __init__(self, jenis="", koneksi=""):
        self.__jenis = jenis
        self.__koneksi = koneksi
    
    def set_jenis(self, jenis):
        self.__jenis = jenis
    
    def set_koneksi(self, koneksi):
        self.__koneksi = koneksi
    
    def get_jenis(self):
        return self.__jenis
    
    def get_koneksi(self):
        return self.__koneksi