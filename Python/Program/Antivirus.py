from Software import Software

class Antivirus(Software):
    def __init__(self, tipe_proteksi="", tanggal_expired="", nama="", versi="", developer=""):
        super().__init__(nama, versi, developer)
        self.__tipe_proteksi = tipe_proteksi
        self.__tanggal_expired = tanggal_expired
    
    def set_tipe_proteksi(self, tipe_proteksi):
        self.__tipe_proteksi = tipe_proteksi
    
    def set_tanggal_expired(self, tanggal_expired):
        self.__tanggal_expired = tanggal_expired
    
    def get_tipe_proteksi(self):
        return self.__tipe_proteksi
    
    def get_tanggal_expired(self):
        return self.__tanggal_expired