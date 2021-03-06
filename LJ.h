//
// Created by Ashwin Sankaralingam on 1/29/18.
//

#ifndef CPLUS_LJ_H
#define CPLUS_LJ_H

#include "Particle.h"


class LJ {
public:
    void force_calculate(Particle A, Particle B);
    float distance_calculate(Particle A, Particle B,float threshold);

    void set_force_zero(Particle *list,int number);
};


#endif //CPLUS_LJ_H
