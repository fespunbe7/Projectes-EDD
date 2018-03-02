
#ifndef CERCLE_H
#define CERCLE_H
class Cercle {
public:
    Cercle();
    Cercle(float radi);
    Cercle(const Cercle& orig);
    virtual ~Cercle();
    float getArea();
    float getRadi();
private:
    float radi;
};

#endif /* CERCLE_H */

