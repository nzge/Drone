#ifndef MPU6050_H
#define MPU6050_H

#include <tuple>

class MPU6050{
  public:
    void init(void);
    void calibrate(void);
    std::tuple<float, float, float> acc_read(void);
    std::tuple<float, float, float> gyro_read(void);
  private:
    float Ax, Ay, Az;
    float Gx, Gy, Gz;
    
    float AccCalibrationErrorX, AccCalibrationErrorY, AccCalibrationErrorZ = 0.0;
    float GyroCalibrationErrorX, GyroCalibrationErrorY, GyroCalibrationErrorZ = 0.0;
};


#endif