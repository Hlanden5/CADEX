#ifndef CURVE_H
#define CURVE_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <memory>
#include <tuple>
#include <stdexcept>
#include <cmath>

class curve {
public:
    virtual ~curve() {}
    virtual std::tuple<double, double, double> getPoint(double t) = 0;
    virtual std::tuple<double, double, double> getDerivative(double t) = 0;
};


#endif // CURVE_H
