#include "mcu_walker.hpp"

mcu_walker::mcu_walker(float cpu_speed,int memory,string os,string nama,int volt,int motor_speed,int rotation)
    :MCU(cpu_speed,memory,os,nama,volt), motor_speed(motor_speed), rotation(rotation) {
    cout << "[KONSTRUKTOR WALKER] : Sistem gerak " << nama << " telah diinisialisasi." << endl;
};
void mcu_walker::rotate(int rotation1) {
    rotation = rotation1;
    cout << "[WALKER] : " << nama << " berputar ke arah " << rotation << " derajat." << endl;
};
void mcu_walker::increase_speed(int speed){
    motor_speed = speed;
    cout << "[WALKER] : Kecepatan motor " << nama << " naik menjadi " << motor_speed << " RPM." << endl;
};
void mcu_walker::showSpek(){
    cout << "[SPEK MCU_WALKER] : " << nama << "\n"
     "- CPU     : " << spd << " GHz\n"
     "- RAM     : " << ram << " MB\n"
     "- OS      : " << OS << " \n"
     "- Volt    : " << voltage << " V\n"
     "- Speed   : " << motor_speed << " RPM\n"
     "- Rotation: " << rotation << " Deg" << endl;
};
void mcu_walker::ganti_os(string new_os) {
    OS = new_os;
    cout << "[WALKER UPDATE] : " << nama << " migrasi OS ke " << OS << endl;
};
mcu_walker::~mcu_walker() {
    cout << "[DESTRUKTOR WALKER] : Komponen walker " << nama << " telah dimatikan." << endl;
};