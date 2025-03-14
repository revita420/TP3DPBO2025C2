from Software import Software

class OS(Software):
    def __init__(self, arsitektur="", kernel="", nama="", versi="", developer=""):
        super().__init__(nama, versi, developer)
        self.__arsitektur = arsitektur
        self.__kernel = kernel
    
    def set_arsitektur(self, arsitektur):
        self.__arsitektur = arsitektur
    
    def set_kernel(self, kernel):
        self.__kernel = kernel
    
    def get_arsitektur(self):
        return self.__arsitektur
    
    def get_kernel(self):
        return self.__kernel