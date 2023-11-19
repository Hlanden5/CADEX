#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "curve.h"

class ellipse : public curve {
public:
    ellipse(double radiusX, double radiusY);
    std::tuple<double, double, double> getPoint(double t) override;
    std::tuple<double, double, double> getDerivative(double t) override;
private:
    double rx, ry;
};

#endif // ELLIPSE_H
