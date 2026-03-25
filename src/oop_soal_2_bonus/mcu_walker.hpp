#pragma once 
#include "mcu.hpp"

class mcu_walker:public MCU{
//[TODO]:Tambahkan atribut-atribut yang belum lengkap agar class dapat di-contruct
    int motor_speed;
    int rotation;
private:
public:
    mcu_walker(float cpu_speed,int memory,std::string os,std::string nama,int volt,int motor_speed,int rotation);
    void rotate(int rotation);
    void increase_speed(int speed);
    void showSpek() override;
    void ganti_os(std::string new_os);
    ~mcu_walker();
};
