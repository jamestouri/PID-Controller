#include "PID.h"
#include <vector>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;
    
    Kp = Kp;
    Ki = Ki;
    Kd = Kd;
    
}

void PID::UpdateError(double cte) {
    d_error = cte - p_error;
    p_error = cte;
    i_error += cte;
    
    
    
}

double PID::TotalError() {
    double the_steering =  Kp * p_error - Ki * i_error - Kd * d_error;
    
    if(the_steering <= -1.0) {
        the_steering = -1.0;
    }
    if(the_steering >= 1.0) {
        the_steering = 1.0;
    }
    
    return the_steering;
}

