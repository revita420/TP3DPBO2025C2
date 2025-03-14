from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Komputer import Komputer
from KomputerGaming import KomputerGaming
from Periferal import Periferal
from Mouse import Mouse
from Keyboard import Keyboard
from Monitor import Monitor
from Software import Software
from OS import OS
from Antivirus import Antivirus
from Gaming import Gaming
from RGBController import RGBController
from KeyboardGaming import KeyboardGaming


def main():
    # Pembuatan objek komponen dasar
    cpu = Cpu(12, 3.8, "Intel", "Core i7-12700K")
    ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")
    ram2 = Ram(16, "DDR5", "Corsair", "Vengeance")
    harddrive = Harddrive(2000, "NVMe SSD", "Samsung", "980 Pro")
    
    # Pembuatan objek periferal
    mouse = Mouse(16000, 8, "Gaming Mouse", "USB")
    keyboard = Keyboard("Mechanical", True, "Gaming Keyboard", "USB")
    monitor = Monitor(27, 165, "2560x1440", "Gaming Monitor", "DisplayPort")
    
    # Pembuatan objek software
    os = OS("64-bit", "Windows NT", "Windows 11", "22H2", "Microsoft")
    antivirus = Antivirus("Real-time", "2025-12-31", "Norton", "2023", "Symantec")
    game1 = Gaming(144, "FPS", "Counter-Strike 2", "1.0", "Valve")
    game2 = Gaming(60, "RPG", "Elden Ring", "1.1", "FromSoftware")
    
    # Pembuatan list untuk periferal dan software
    periferals = [mouse, keyboard, monitor]
    softwares = [os, antivirus, game1, game2]
    
    # Pembuatan objek komputer gaming
    rams = [ram1, ram2]
    gaming_pc = KomputerGaming("ROG Strix Gaming PC", cpu, rams, harddrive, periferals, softwares, True, 0.5)
    
    # Menampilkan informasi komputer gaming
    print("\n===== INFORMASI KOMPUTER GAMING =====\n")
    gaming_pc.display_info()
    
    # Pembuatan objek keyboard gaming (multiple inheritance)
    kb_gaming = KeyboardGaming("Cherry MX Red", True, "TKL Gaming Keyboard", "USB", 
                             "Red", 80, True, 1000, True)
    
    print("\n\n===== INFORMASI KEYBOARD GAMING =====\n")
    kb_gaming.display_info()
    
    # Mengubah status RGB pada keyboard gaming
    print("\nMengubah status RGB pada keyboard gaming...")
    kb_gaming.toggle_rgb()
    print(f"Status RGB sekarang: {'Aktif' if kb_gaming.get_is_on() else 'Nonaktif'}")
    
    # Menambahkan RAM pada komputer gaming
    print("\nMenambahkan RAM baru pada komputer gaming...")
    ram3 = Ram(32, "DDR5", "Kingston", "Fury Beast")
    gaming_pc.add_ram(ram3)
    
    # Menambahkan periferal baru pada komputer gaming
    print("Menambahkan periferal baru pada komputer gaming...")
    headset = Periferal("Gaming Headset", "USB")
    gaming_pc.add_periferal(headset)
    
    # Menambahkan software baru pada komputer gaming
    print("Menambahkan software baru pada komputer gaming...")
    game3 = Gaming(60, "Adventure", "The Witcher 3", "1.32", "CD Projekt Red")
    gaming_pc.add_software(game3)
    
    # Menampilkan informasi terbaru komputer gaming
    print("\n===== INFORMASI TERBARU KOMPUTER GAMING =====\n")
    gaming_pc.display_info()


if __name__ == "__main__":
    main()