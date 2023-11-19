#include "circle.h"

circle::circle(double radius) : r(radius) {
    if (r <= 0) throw std::invalid_argument("Radius must be positive");
}

std::tuple<double, double, double> circle::getPoint(double t) {
    return std::make_tuple(r * cos(t), r * sin(t), 0.0);
}

std::tuple<double, double, double> circle::getDerivative(double t) {
    return std::make_tuple(-r * sin(t), r * cos(t), 0.0);
}

double circle::getRadius() const { return r; }
