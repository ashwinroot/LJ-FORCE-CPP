//
// Created by Ashwin Sankaralingam on 1/29/18.
//

#include "LJ.h"


void LJ::force_calculate(Particle A, Particle B) {
    float potential, force[2]={0};
    float distance = distance_calculate(A<B100); //thresholding at max
    if(distance)
    {
        float rvector[2] ={0.0};
        rvector[0] = (A.x - B.x) / distance;
        rvector [1] = (A.y - B.y) / distance;

        //force calculation
        force[0] = 24 * (2 * -14* pow(distance,-15) + 8 * pow(distance,-9)) * rvector[0];
        force[1] = 24 * (2 * -14* pow(distance,-15) + 8 * pow(distance,-9)) * rvector[1];

        //assignment
        A.force[0] += force[0];
        A.force[1] += force[1];
        B.force[0] -= force[0];
        B.force[1] -= force[1];


    }

}

float LJ::distance_calculate(Particle A, Particle B,float threshold) {
    float distance = pow(pow(A.x-B.x,2)+pow(A.y-B.y,2),0.5);
    if(distance>=threshold)
    {
        return distance;
    }
    return 0;
}
