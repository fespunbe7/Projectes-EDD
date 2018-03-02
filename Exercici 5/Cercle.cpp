#include "Cercle.h"
#include <math.h>
Cercle::Cercle() {
    radi = 1;
}
Cercle::Cercle(float radi){
    this->radi = radi;
}

Cercle::Cercle(const Cercle& orig) {
}
float Cercle::getArea(){
   return 3.14*this->getRadi()*this->getRadi();
    
}
float Cercle::getRadi(){
    return this->radi;
}
Cercle::~Cercle() {
}

