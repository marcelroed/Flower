#pragma once
#include "FieldState.hpp"
class Simulator{
    public:
        virtual void simulate(float timestep) = 0;
        Simulator(FieldState& fs);
        FieldState& fieldstate;
};