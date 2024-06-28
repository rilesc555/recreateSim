#include "../include/asset.h"

asset::asset(/* args */)
{
}

asset::~asset()
{
    delete parent_simulation;
}

simulation* asset::get_parent_simulation() {
    return this->parent_simulation;
}

void asset::set_parent_simulation(simulation* ParentSimulation) {
    this->parent_simulation = ParentSimulation;
}