#include <iostream>
#include "simulation.h"
#include "effector.h"
#include "behavior.h"
#include "RadarSignature.h"
#include "HPMSignature.h"
#include "eigen-3.4.0/Eigen/Dense"
#include <objbase.h>
#include <rpc.h>
#include <vector>

#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "rpcrt4.lib")

class Asset
{
private:
    /* data */
    Simulation *parent_simulation;

public:
    Asset(/* args */);
    ~Asset();
    Simulation *get_parent_simulation();
    void set_parent_simulation(Simulation *ParentSimulation);

    GUID GUID;

    Eigen::Vector3d Location;
    Eigen::Vector3d SpawnLocation;
    Eigen::Vector3d DestroyedLocation;
    Eigen::Vector3d Velocity;
    Eigen::Vector3d Rotation;
    Eigen::Vector3d SpawnRotation;

    std::string Team;
    std::string Battalion;
    bool Destroyed;
    bool Active;
    float TimeToActivate;

    void Effect(Asset effector);

    void Update(float deltatime);

    float AcquisitionCost;
    float OperationCost;
    float CrossSectionalRadius;
    float HPMHardness;
    float GPSJammedAtAltitude;

    std::vector<Effector> Effectors;
    std::vector<Behavior> Behaviors;

    HPMSignature HPMSignature;
    RadarSignature RadarSignature;
    std::vector<Eigen::Vector3d> Waypoints;
};
