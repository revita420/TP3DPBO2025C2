# Janji
Saya Syahraini Revita Puri dengan NIM 2301895 berjanji mengerjakan TP3 DPBO dengan keberkahan-Nya, maka saya tidak akan melakukan kecurangan sesuai yang telah di spesifikasikan, Aamiin

# Diagram
![TP3 drawio](https://github.com/user-attachments/assets/c9bc5b46-fe67-45fe-b50d-0df592001ca5)

# Desain Program
Program terdiri dari 16 class yaitu Komponen, Komputer, KomputerGaming, Cpu, Ram, Harddrive, Periferal, Mouse, Keyboard, Monitor, Software, OS, Antivirus, Gaming, RGBController, dan KeyboardGaming.
Hubungan antar class: 


**Hierarchical Inheritance**: 
- Periferal sebagai parent class memiliki turunan Mouse, Keyboard, dan Monitor
- Software sebagai parent class memiliki turunan OS, Antivirus, dan Gaming
- Komponen sebagai parent class memiliki turunan Cpu, Ram, dan Harddrive.


**Multiple Inheritance**:
- KeyboardGaming mewarisi dari Keyboard dan RGBController.


**Single Inheritance**:
- KomputerGaming mewarisi dari Komputer.


**Composition**:
- Komputer memiliki komposisi dengan Cpu, Ram, dan Harddrive
- Komputer memiliki komposisi dengan list of Periferal dan list of Software

# Alur Program
Pertama data komponen komputer diisi secara statis, lalu program membuat objek komponen dasar (Cpu, Ram, Harddrive). Setelah itu program membuat objek periferal (Mouse, Keyboard, Monitor) dan software (OS, Antivirus, Gaming).
Selanjutnya program membuat array untuk menyimpan periferal dan software. Kemudian program membuat objek komputer gaming dengan komponen-komponen yang telah dibuat sebelumnya.
Program kemudian menampilkan informasi komputer gaming yang telah dibuat. Setelah itu program membuat objek keyboard gaming yang menunjukkan implementasi multiple inheritance.
Kemudian program melakukan beberapa aksi:
- Menampilkan informasi keyboard gaming
- Mengubah status RGB pada keyboard gaming dengan memanggil method toggle_rgb()
- Menambahkan RAM baru pada komputer gaming dengan method add_ram()
- Menambahkan periferal baru (headset) pada komputer gaming dengan method add_periferal()
- Menambahkan software baru (game) pada komputer gaming dengan method add_software().


Terakhir, program menampilkan informasi terbaru komputer gaming setelah dilakukan modifikasi.

# Dokumentasi
![WhatsApp Image 2025-03-14 at 11 19 10_047793b8](https://github.com/user-attachments/assets/0c48de2f-958c-4d88-8409-9405c0dec38e)
![WhatsApp Image 2025-03-14 at 11 19 45_2595daa1](https://github.com/user-attachments/assets/b96a0248-9b3d-474a-9912-263009b91d77)
![WhatsApp Image 2025-03-14 at 11 20 08_ccf38461](https://github.com/user-attachments/assets/53e56a34-0e90-446d-bd26-b8efd4cfddb9)


