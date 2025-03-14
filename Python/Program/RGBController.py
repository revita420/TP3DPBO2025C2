class RGBController:
    def __init__(self, warna="Rainbow", bright_level=50, is_on=False):
        self.__warna = warna
        self.__bright_level = bright_level
        self.__is_on = is_on
    
    def set_warna(self, warna):
        self.__warna = warna
    
    def set_bright_level(self, bright_level):
        if 0 <= bright_level <= 100:
            self.__bright_level = bright_level
    
    def set_is_on(self, is_on):
        self.__is_on = is_on
    
    def get_warna(self):
        return self.__warna
    
    def get_bright_level(self):
        return self.__bright_level
    
    def get_is_on(self):
        return self.__is_on
    
    def toggle_rgb(self):
        self.__is_on = not self.__is_on
        print(f"RGB {'diaktifkan' if self.__is_on else 'dinonaktifkan'}")