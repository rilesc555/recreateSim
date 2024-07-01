#include "../include/asset.h"

Asset::Asset(/* args */)
{
}

Asset::~Asset()
{
    delete this->parent_simulation;
}

Simulation* Asset::get_parent_simulation() {
    return this->parent_simulation;
}

void Asset::set_parent_simulation(Simulation* ParentSimulation) {
    this->parent_simulation = ParentSimulation;
}


