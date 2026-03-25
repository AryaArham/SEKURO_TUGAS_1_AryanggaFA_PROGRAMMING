#pragma once

#include "mcu.hpp"

class mcu_cam_controller:public MCU{
private:
    string obj_d;
    int count_detected_obj;

public:
    mcu_cam_controller(float cpu_speed,int memory,string os,string nama,int volt,string obj_detected);
    void detect_other_object(string other, bool moving);
    void showSpek() override;
    void nambah_volt(int penambahan_voltase);
    ~mcu_cam_controller();
};