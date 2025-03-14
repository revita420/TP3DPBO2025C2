from Periferal import Periferal

class Mouse(Periferal):
    def __init__(self, dpi=0, jumlah_button=0, jenis="", koneksi=""):
        super().__init__(jenis, koneksi)
        self.__dpi = dpi
        self.__jumlah_button = jumlah_button
    
    def set_dpi(self, dpi):
        self.__dpi = dpi
    
    def set_jumlah_button(self, jumlah_button):
        self.__jumlah_button = jumlah_button
    
    def get_dpi(self):
        return self.__dpi
    
    def get_jumlah_button(self):
        return self.__jumlah_button