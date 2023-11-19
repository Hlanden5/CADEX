#ifndef CIRCLE_H
#define CIRCLE_H

#include "curve.h"

class circle : public curve {
public:
    circle(double radius);
    std::tuple<double, double, double> getPoint(double t) override;
    std::tuple<double, double, double> getDerivative(double t) override;
    double getRadius() const;
private:
    double r;
};


#endif // CIRCLE_H
