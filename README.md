# Janji
Saya Syahraini Revita Puri dengan NIM 2301895 berjanji mengerjakan TP3 DPBO dengan keberkahan-Nya, maka saya tidak akan melakukan kecurangan sesuai yang telah di spesifikasikan, Aamiin

# Diagram
![TP3 drawio](https://github.com/user-attachments/assets/c9bc5b46-fe67-45fe-b50d-0df592001ca5)

# Desain Program
Program terdiri dari 13 class yaitu Komputer, KomputerGaming, Cpu, Ram, Harddrive, Periferal, Mouse, Keyboard, Monitor, Software, OS, Antivirus, Gaming, RGBController, dan KeyboardGaming.
Hubungan antar class:
- Hubungan inheritance antara Komputer dan KomputerGaming (KomputerGaming mewarisi Komputer)
- Hubungan inheritance antara Periferal dan turunannya (Mouse, Keyboard, Monitor)
- Hubungan inheritance antara Software dan turunannya (OS, Antivirus, Gaming)
- Multiple inheritance pada KeyboardGaming yang mewarisi dari Keyboard dan RGBController
- Hubungan aggregation/composition antara Komputer dengan Cpu, Ram, dan Harddrive
- Hubungan composition antara Komputer dengan list of Periferal dan list of Software
- Hubungan association antara KomputerGaming dengan Gaming

# Alur Program
Pertama data komponen komputer diisi secara statis, lalu program membuat objek komponen dasar (Cpu, Ram, Harddrive). Setelah itu program membuat objek periferal (Mouse, Keyboard, Monitor) dan software (OS, Antivirus, Gaming).
Selanjutnya program membuat array untuk menyimpan periferal dan software. Kemudian program membuat objek komputer gaming dengan komponen-komponen yang telah dibuat sebelumnya.
Program kemudian menampilkan informasi komputer gaming yang telah dibuat. Setelah itu program membuat objek keyboard gaming yang menunjukkan implementasi multiple inheritance.
Kemudian program melakukan beberapa aksi:
(1)Menampilkan informasi keyboard gaming
(2)Mengubah status RGB pada keyboard gaming dengan memanggil method toggle_rgb()
(3)Menambahkan RAM baru pada komputer gaming dengan method add_ram()
(4)Menambahkan periferal baru (headset) pada komputer gaming dengan method add_periferal()
(5)Menambahkan software baru (game) pada komputer gaming dengan method add_software(). 
Terakhir, program menampilkan informasi terbaru komputer gaming setelah dilakukan modifikasi.
