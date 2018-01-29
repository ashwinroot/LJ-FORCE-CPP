//
// Created by Ashwin Sankaralingam on 1/29/18.
//

#include "Particle.h"

Particle::Particle(int a, int b, int num_particle) {
    x=a;
    y=b;
    ux=0;
    uy=0;
    mass =1;
    force[0] = 0;
    force[1] = 0;

}

Particle::Particle() {

}

void Particle::set_force_zero() {
    force[0] = 0;
    force[1] = 0;
}

void Particle::update_force() {

}

void  Particle::motion_equation() {
    x = x + (ux*dt) + (0.5*force[0]* pow(dt,2));
    ux= ux + force[0] *dt;

    y = y + (uy*dt) + (0.5*force[1]* pow(dt,2));
    uy= uy + force[1] *dt;

    //TODO: Work on boundary conditions of x (bouncing of the wall)

}

void Particle::printParticle()
{
    cout<<"(x,y)"<<x<<y<<endl;
    cout<<"(ux,uy)"<<ux<<uy<<endl;
    cout<<"(Force)"<<force[0]<<force[1]<<endl;

}