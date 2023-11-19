#include "helix.h"

helix::helix(double radius, double step) : r(radius), s(step) {
    if (r <= 0) throw std::invalid_argument("Radius must be positive");
}

std::tuple<double, double, double> helix::getPoint(double t) {
    return std::make_tuple(r * cos(t), r * sin(t), s * t);
}

std::tuple<double, double, double> helix::getDerivative(double t) {
    return std::make_tuple(-r * sin(t), r * cos(t), s);
}
