#include "mbed.h"
#include "Servo.h"
#include "SoftServo.h"
// PwmOut  motor1_pwm(PB_4);
DigitalOut motor1_en(PB_4);
// DigitalOut motor1_in1(PB_14);
// DigitalOut motor1_in2(PB_15);

// PwmOut  motor2_pwm(PB_5);
DigitalOut motor2_en(PB_5);
// DigitalOut motor2_in1(PA_12);
// DigitalOut motor2_in2(PB_3);

PwmOut  motor3_pwm(PB_0);
//DigitalOut motor3_en(PB_0);
DigitalOut motor3_in1(PB_12);
DigitalOut motor3_in2(PB_13);

PwmOut  motor4_pwm(PB_1);
//DigitalOut motor4_en(PB_1);
DigitalOut motor4_in1(PA_0);
DigitalOut motor4_in2(PB_2);
//I2CSlave slave(PB_7, PB_6);


SoftServo servo_1(PA_11);
SoftServo servo_2(PA_8);

Servo servo_3(PB_8);
Servo servo_4(PB_9);
Servo servo_5(PA_3);
Servo servo_6(PA_2);

// DigitalOut test_PA8(PA_8);
// DigitalOut test_PA11(PA_11);

DigitalOut test_PB11(PB_11);
DigitalOut test_PA7(PA_7);
DigitalOut test_PA6(PA_6);
DigitalOut test_PA5(PA_5);
DigitalOut test_PA4(PA_4);
DigitalOut test_PB10(PB_10);
BusOut stepper(PB_14,PB_15,PA_12,PB_3);
void moverStepper(int paso){
    switch (paso){
        case 0:
            stepper = 8;
            break;
        case 1:
            stepper = 12;
            break;
        case 2:
            stepper = 4;
            break;
        case 3:
            stepper = 6;
            break;
        case 4:
            stepper = 2;
            break;
        case 5:
            stepper = 3;
            break;
        case 6:
            stepper = 1;
            break;
        case 7:
            stepper = 9;
            break;
    }
    wait(.005);
}
   
int main() {
//    motor1_pwm.period(0.001);
//    motor2_pwm.period(0.001);
    motor3_pwm.period(0.001);
    motor4_pwm.period(0.001);
    
//    motor1_pwm.write(0.6f);
//    motor2_pwm.write(0.6f);
    motor3_pwm.write(0.6f);
    motor4_pwm.write(0.6f);

    // servo_1.period(0.001);
    // servo_2.period(0.001);
    // servo_3.period(0.001);
    // servo_4.period(0.001);
    // servo_5.period(0.001);
    // servo_6.period(0.001);
    
    // servo_1.write(0.6f);
    // servo_2.write(0.6f);
    // servo_3.write(0.6f);
    // servo_4.write(0.6f);
    // servo_5.write(0.6f);
    // servo_6.write(0.6f);
    motor1_en = 1;
    motor2_en = 1;
    //PB_14 PB_15 PA_12 PB_3
    
    motor3_in1 = 0;
    motor3_in2 = 1;
    
    motor4_in1 = 0;
    motor4_in2 = 1;

    float duty = 0.0f;



    while(1) {
        // motor1_in1 = 1;
        // motor1_in2 = 0;
        
        // motor2_in1 = 1;
        // motor2_in2 = 0;
        
        // motor3_in1 = 1;
        // motor3_in2 = 0;
        
        // motor4_in1 = 1;
        // motor4_in2 = 0;
        // // test_PA8 = 1;
        // // test_PA11 = 1;
        // test_PB11 = 1;
        // test_PA7 = 1;
        // test_PA6 = 1;
        // test_PA5 = 1;
        // test_PA4 = 1;
        // test_PB10 = 1;
        
        // wait(1); // 1 sec
        // motor1_in1 = 0;
        // motor1_in2 = 1;
        
        // motor2_in1 = 0;
        // motor2_in2 = 1;
        
        // motor3_in1 = 0;
        // motor3_in2 = 1;
        
        // motor4_in1 = 0;
        // motor4_in2 = 1;

        // // test_PA8 = 0;
        // // test_PA11 = 0;
        // test_PB11 = 0;
        // test_PA7 = 0;
        // test_PA6 = 0;
        // test_PA5 = 0;
        // test_PA4 = 0;
        // test_PB10 = 0;
        // wait(1); // 1 sec
        for (int i = 0; i <= 7; i++){
            moverStepper(i);
        }
       
        duty = duty + 0.1;
        if(duty >= 1.0f)
            duty = 0.0f;
        //motor1_pwm.write(duty);
       // motor2_pwm.write(duty);
        motor3_pwm.write(duty);
        motor4_pwm.write(duty);
        
        // servo_1.write(duty);
        // servo_2.write(duty);
        servo_1 = duty;
        servo_2 = duty;
        servo_3 = duty;
        servo_4 = duty;
        servo_5 = duty;
        servo_6 = duty;
    }
}
