from Keyboard import Keyboard
from RGBController import RGBController


# Multiple Inheritance
class KeyboardGaming(Keyboard, RGBController):
    def __init__(self, tipe_switch="", is_rgb=False, jenis="", koneksi="", 
                 warna="", bright_level=0, is_on=False, 
                 polling_rate=0, is_nkro=False):
        Keyboard.__init__(self, tipe_switch, is_rgb, jenis, koneksi)
        RGBController.__init__(self, warna, bright_level, is_on)
        self.__polling_rate = polling_rate
        self.__is_nkro = is_nkro
    
    def set_polling_rate(self, polling_rate):
        self.__polling_rate = polling_rate
    
    def set_is_nkro(self, is_nkro):
        self.__is_nkro = is_nkro
    
    def get_polling_rate(self):
        return self.__polling_rate
    
    def get_is_nkro(self):
        return self.__is_nkro
    
    def display_info(self):
        print("Keyboard Gaming:")
        print(f"Jenis: {self.get_jenis()}")
        print(f"Koneksi: {self.get_koneksi()}")
        print(f"Tipe Switch: {self.get_tipe_switch()}")
        print(f"RGB: {'Ya' if self.get_is_rgb() else 'Tidak'}")
        print(f"RGB Status: {'Aktif' if self.get_is_on() else 'Nonaktif'}")
        print(f"RGB Warna: {self.get_warna()}")
        print(f"RGB Brightness: {self.get_bright_level()}%")
        print(f"Polling Rate: {self.__polling_rate} Hz")
        print(f"N-Key Rollover: {'Ya' if self.__is_nkro else 'Tidak'}")
