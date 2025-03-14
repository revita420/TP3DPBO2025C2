from Komputer import Komputer
from Periferal import Periferal
from Software import Software


# Hierarchical Inheritance - KomputerGaming mewarisi dari Komputer
class KomputerGaming(Komputer):
    def __init__(self, nama="", cpu=None, ram_list=None, harddrive=None,
                 periferal_list=None, software_list=None,
                 is_overclocked=False, overclock_rate=0.0):
        super().__init__(nama, cpu, ram_list if ram_list else [], harddrive)
        self.__periferal_list = periferal_list if periferal_list else []
        self.__software_list = software_list if software_list else []
        self.__is_overclocked = is_overclocked
        self.__overclock_rate = overclock_rate
    
    def set_periferal(self, periferal_list):
        self.__periferal_list = periferal_list
    
    def set_software(self, software_list):
        self.__software_list = software_list
    
    def set_is_overclocked(self, is_overclocked):
        self.__is_overclocked = is_overclocked
    
    def set_overclock_rate(self, overclock_rate):
        self.__overclock_rate = overclock_rate
    
    def add_periferal(self, periferal):
        self.__periferal_list.append(periferal)
    
    def add_software(self, software):
        self.__software_list.append(software)
    
    def get_periferal(self):
        return self.__periferal_list
    
    def get_software(self):
        return self.__software_list
    
    def get_is_overclocked(self):
        return self.__is_overclocked
    
    def get_overclock_rate(self):
        return self.__overclock_rate
    
    # Override fungsi display_info dari kelas induk
    def display_info(self):
        # Panggil fungsi display_info dari kelas induk
        super().display_info()
        
        # Tambahkan informasi khusus KomputerGaming
        print(f"\nStatus Overclock: {'Ya' if self.__is_overclocked else 'Tidak'}", end="")
        if self.__is_overclocked:
            print(f" (+{self.__overclock_rate}GHz)")
        else:
            print()
        
        # Tampilkan daftar periferal
        print("\nDaftar Periferal:")
        for i, periferal in enumerate(self.__periferal_list):
            print(f"{i+1}. {periferal.get_jenis()} - Koneksi: {periferal.get_koneksi()}")
        
        # Tampilkan daftar software
        print("\nDaftar Software:")
        for i, software in enumerate(self.__software_list):
            print(f"{i+1}. {software.get_nama()} v{software.get_versi()} by {software.get_developer()}")
