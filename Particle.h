//
// Created by Ashwin Sankaralingam on 1/29/18.
//

#ifndef CPLUS_PARTICLE_H
#define CPLUS_PARTICLE_H

#include <iostream>
#include <cmath>
using namespace std;

class Particle {
public:
        float x;
        float y;
        float ux;
        float uy;
        float mass;
        double force[2];
        float dt = 0.0005;

    Particle(int x,int y,int num_particle);
    float motion_equation();



};


#endif //CPLUS_PARTICLE_H
