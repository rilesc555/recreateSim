#include <iostream>
#include "simulation.h"

class asset
{
private:
    /* data */
    simulation* parent_simulation;

public:
    asset(/* args */);
    ~asset();
    simulation* get_parent_simulation();
    void set_parent_simulation(simulation* ParentSimulation);
};

