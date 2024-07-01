#include "utils/utils"
#include "asset.h"
#include "team.h"
#include <optional>
#include <unordered_map>
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
    std::unordered_map<std::string, ::Team> Teams;
    Simulation(std::optional<int> seed);
    ~Simulation();
};
