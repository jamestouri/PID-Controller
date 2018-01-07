#include "PID.h"
#include <vector>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    int n = 100;
    float speed = 20.0;
    
    vector<float> x_trajectory;
    vector<float> y_trajectory;
    
    int int_cte = 0;
    
}

void PID::UpdateError(double cte) {
    
}

double PID::TotalError() {
    
}

