#include "utils/utils"
#include "asset.h"
#include <optional>
class Simulation
{
private:
    /* data */
public:
    std::unique_ptr<Random> random;
    int Seed;
    float DeltaTime;
    float Time;
    std::vector<Asset> Assets;

    Simulation(std::optional<int> seed);
    ~Simulation();
};
