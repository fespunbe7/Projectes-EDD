#include "Ellipse.h"
#include <math.h>

Ellipse::Ellipse(float radi1, float radi2){
    this->radi1 = radi1;
    this->radi2 = radi2;
}

Ellipse::Ellipse(const Ellipse& orig) {
}

float Ellipse::getArea(){
    
    return 3.14*this->radi1*this->radi2;
}
Ellipse::~Ellipse() {
}

Ellipse::Ellipse() {
    radi1 = 1;
    radi2 = 1;
}

float Ellipse::getRadis(){
    return radi1,radi2;
}
