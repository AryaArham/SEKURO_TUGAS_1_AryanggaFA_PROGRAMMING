#include "core_mcu.hpp"
#include <iostream>
using namespace std;
// [TODO] : Implementasikan class core_mcu di file cpp ini
// [TIPS] : Gunakan CoreMCU::<nama methode> untuk mengimplementasikan methodenya

Core_MCU::Core_MCU(float cpu_speed,int memory,string os,string nama,int volt){
    cout << "[Core_MCU] : MCU utama yang bernama " << nama << " telah dibuat" << endl;
    this->cpu_speed = cpu_speed;
    this->memory = memory;
    this->os = os;
    this->nama = nama;
    this->volt = volt;
    Core_MCU::showSpek();
};

void Core_MCU::showSpek(){
    cout << "[SPEK Device] : [NAMA_DEVICE]: " << nama << " | [CPU CLOCK] : " << cpu_speed << "  | [MEMORY] : " << memory << " | [OS] : " << os << endl;
};

Core_MCU::~Core_MCU(){
    cout << "[Core_MCU] : MCU utama yang bernama " << nama << " telah dihapus" << endl;
};

void Core_MCU::nambah_volt(int penambahan_voltase){
    this->volt += penambahan_voltase;
    cout << "[Core_MCU] : MCU utama yang bernama " << nama << " Telah ditambah voltasenya menjadi = " << volt << endl;
};

void Core_MCU::ganti_os(string new_os){
    this->os = new_os;
    cout << "[Core_MCU] : MCU utama yang bernama " << nama << " Telah diganti OS nya menjadi = " << os << endl;
};

string Core_MCU::get_os(){
    return this->os;
};