#include "curve.h"
#include "circle.h"
#include "ellipse.h"
#include "helix.h"

void printPointsAndDerivatives(const std::vector<std::shared_ptr<curve>>& curves, double t);
bool compareCircles(const std::shared_ptr<circle>& c1, const std::shared_ptr<circle>& c2);

int main() {
    std::vector<std::shared_ptr<curve>> curves;
    curves.push_back(std::make_shared<circle>(1.0));
    curves.push_back(std::make_shared<ellipse>(2.0, 3.0));
    curves.push_back(std::make_shared<helix>(1.0, 0.5));

    printPointsAndDerivatives(curves, M_PI / 4);

    std::vector<std::shared_ptr<circle>> circles;
    for (const auto& curve : curves) {
        auto circle_tmp = std::dynamic_pointer_cast<circle>(curve);
        if (circle_tmp) {
            circles.push_back(circle_tmp);
        }
    }

    std::sort(circles.begin(), circles.end(), compareCircles);

    double totalRadius = 0.0;
    for (const auto& circle : circles) {
        totalRadius += circle->getRadius();
    }
    std::cout << "Total sum of radii: " << totalRadius << "\n";

    return 0;
}

void printPointsAndDerivatives(const std::vector<std::shared_ptr<curve>>& curves, double t) {
    for (const auto& curve : curves) {
        auto point = curve->getPoint(t);
        auto derivative = curve->getDerivative(t);
        std::cout << "Point: (" << std::get<0>(point) << ", " << std::get<1>(point) << "), ";
        std::cout << "Derivative: (" << std::get<0>(derivative) << ", " << std::get<1>(derivative) << ")\n";
    }
}

bool compareCircles(const std::shared_ptr<circle>& c1, const std::shared_ptr<circle>& c2) {
    return c1->getRadius() < c2->getRadius();
}
