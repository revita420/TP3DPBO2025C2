from Periferal import Periferal

class Keyboard(Periferal):
    def __init__(self, tipe_switch="", is_rgb=False, jenis="", koneksi=""):
        super().__init__(jenis, koneksi)
        self.__tipe_switch = tipe_switch
        self.__is_rgb = is_rgb
    
    def set_tipe_switch(self, tipe_switch):
        self.__tipe_switch = tipe_switch
    
    def set_is_rgb(self, is_rgb):
        self.__is_rgb = is_rgb
    
    def get_tipe_switch(self):
        return self.__tipe_switch
    
    def get_is_rgb(self):
        return self.__is_rgb