#ifndef ELLIPSE_H
#define ELLIPSE_H

class Ellipse {
public:
    Ellipse();
    Ellipse(float radi1, float radi2);
    Ellipse(const Ellipse& orig);
    virtual ~Ellipse();
    float getArea();
    float getRadis();
private:
    float radi1, radi2;
};

#endif /* ELLIPSE_H */
