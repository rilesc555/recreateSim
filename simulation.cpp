#include "include/simulation.h"
#include

Simulation::Simulation(std::optional<int> seed)
{
    random = std::make_unique<Random>();
    if (!seed.has_value())
    {
        seed = random->nextInt();
    }
    this->Seed = seed.value();

    this->DeltaTime = 0.001;
    this->Time = 0.0;
}

Simulation::~Simulation()
{
}