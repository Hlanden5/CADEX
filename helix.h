#include "curve.h"
#include <stdexcept>
#include <cmath>

class helix : public curve {
public:
    helix(double radius, double step);
    std::tuple<double, double, double> getPoint(double t) override;
    std::tuple<double, double, double> getDerivative(double t) override;
private:
    double r, s;
};
