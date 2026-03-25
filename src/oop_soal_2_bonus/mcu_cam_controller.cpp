#include "mcu_cam_controller.hpp"

//[TODO]: Implementasikan kelas mcu_cam_controller dibawah ini
mcu_cam_controller::mcu_cam_controller(float cpu_speed,int memory,string os,string nama,int volt,string obj_detected)
    :MCU(cpu_speed,memory,os,nama,volt), obj_d(obj_detected), count_detected_obj(1) {
        cout << "[KONSTRUKTOR CAM] : Komponen kamera untuk " << nama << " siap digunakan." << endl;
};
void mcu_cam_controller::detect_other_object(string other, bool moving){
    obj_d = other;
    count_detected_obj++;        
    string status = moving ? "Bergerak/Aktif" : "Diam/Statis";
    cout << "[CAM SYSTEM] : Terdeteksi " << other << " (Status: " << status << ")" << endl;
};
void mcu_cam_controller::showSpek(){
    cout << "[SPEK MCU_CAM] : " << nama << " | [CPU] : " << spd << "GHz | [RAM] : " << ram << "MB | [OS] : " << OS << " | [Volt] : " << voltage << "V | [Last Obj] : " << obj_d << " | [Total Detect] : " << count_detected_obj << endl;
};
void mcu_cam_controller::nambah_volt(int penambahan_voltase){
    voltage += penambahan_voltase;
    cout << "Voltase " << nama << " berhasil dinaikkan ke: " << voltage << "V" << endl;
};
mcu_cam_controller::~mcu_cam_controller(){
    cout << " [DESTRUKTOR] : Objek " << nama << " telah dihapus dari memori" << endl;
};