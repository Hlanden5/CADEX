#include "ellipse.h"

ellipse::ellipse(double radiusX, double radiusY) : rx(radiusX), ry(radiusY) {
    if (rx <= 0 || ry <= 0) throw std::invalid_argument("Radii must be positive");
}

std::tuple<double, double, double> ellipse::getPoint(double t) {
    return std::make_tuple(rx * cos(t), ry * sin(t), 0.0);
}

std::tuple<double, double, double> ellipse::getDerivative(double t) {
    return std::make_tuple(-rx * sin(t), ry * cos(t), 0.0);
}
