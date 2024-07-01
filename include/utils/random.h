#include <iostream>
#include <random>

class Random {
public:
    int value;
    Random()
        : engine(std::random_device{}()) {
        value = this->nextInt();
        }

    int nextInt(double min = INT_MIN, double max = INT_MAX) {
        std::uniform_int_distribution<int> dist(min, max);
        return dist(engine);
    }

    double nextDouble(double min = DBL_MIN, double max = DBL_MAX) {
        std::uniform_real_distribution<double> dist(min, max);
        return dist(engine);
    }

private:
    std::mt19937 engine; // Mersenne Twister random number engine
};