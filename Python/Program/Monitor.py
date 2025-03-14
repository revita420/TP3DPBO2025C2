from Periferal import Periferal

class Monitor(Periferal):
    def __init__(self, ukuran_inch=0.0, refresh_rate=0, resolusi="", jenis="", koneksi=""):
        super().__init__(jenis, koneksi)
        self.__ukuran_inch = ukuran_inch
        self.__refresh_rate = refresh_rate
        self.__resolusi = resolusi
    
    def set_ukuran_inch(self, ukuran_inch):
        self.__ukuran_inch = ukuran_inch
    
    def set_refresh_rate(self, refresh_rate):
        self.__refresh_rate = refresh_rate
    
    def set_resolusi(self, resolusi):
        self.__resolusi = resolusi
    
    def get_ukuran_inch(self):
        return self.__ukuran_inch
    
    def get_refresh_rate(self):
        return self.__refresh_rate
    
    def get_resolusi(self):
        return self.__resolusi