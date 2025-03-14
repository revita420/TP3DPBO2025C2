from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive

class Komputer:
    def __init__(self, nama="", cpu=None, ram_list=None, harddrive=None):
        self.__nama = nama
        self.__cpu = cpu if cpu is not None else Cpu()
        self.__ram_list = ram_list if ram_list is not None else []
        self.__harddrive = harddrive if harddrive is not None else Harddrive()
    
    def set_nama(self, nama):
        self.__nama = nama
    
    def set_cpu(self, cpu):
        self.__cpu = cpu
    
    def set_ram(self, ram_list):
        self.__ram_list = ram_list
    
    def set_harddrive(self, harddrive):
        self.__harddrive = harddrive
    
    def add_ram(self, ram):
        self.__ram_list.append(ram)
    
    def get_nama(self):
        return self.__nama
    
    def get_cpu(self):
        return self.__cpu
    
    def get_ram_list(self):
        return self.__ram_list
    
    def get_harddrive(self):
        return self.__harddrive
    
    def display_info(self):
        print("Informasi Komputer:")
        print(f"Nama : {self.__nama}")
        print(f"Cpu : {self.__cpu.get_merk()} {self.__cpu.get_nama()} "
              f"({self.__cpu.get_jumlah_core()} Core) "
              f"~{self.__cpu.get_kecepatan_ghz()}GHz")
        
        print("RAM :")
        for ram in self.__ram_list:
            print(f"- {ram.get_merk()} {ram.get_nama()} "
                  f"({ram.get_kapasitas_gb()} GB) {ram.get_ddr()}")
        
        print(f"Harddrive : {self.__harddrive.get_tipe_drive()} "
              f"{self.__harddrive.get_merk()} {self.__harddrive.get_nama()} "
              f"({self.__harddrive.get_kapasitas_gb()} GB)")