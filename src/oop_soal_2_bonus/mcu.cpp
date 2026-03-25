#include "mcu.hpp"
// [TODO] : Implementasikan class robot di file cpp ini
// [TIPS] : Gunakan MCU::<nama methode> untuk mendefinisikan class-nya
MCU::MCU(float cpu_speed,int memory,string os,string name,int volt)
    : spd(cpu_speed),ram(memory),OS(os),nama(name),voltage(volt){
        cout << "[KONSTRUKTOR MCU] : Objek " << nama << " berhasil dibuat." << endl;
};
MCU::~MCU(){
    cout << " [DESTRUKTOR MCU] : Objek base " << nama << " dibersihkan." << endl;
};
void MCU::nambah_volt(int penambahan_voltase){}
void MCU::ganti_os(string new_os){}
void MCU::showSpek(){}