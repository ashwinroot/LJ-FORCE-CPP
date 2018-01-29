#include <iostream>
#include <time.h>
#include "Particle.h"
#include "LJ.h"

using namespace std;



int main() {
    const int num_particles = 9;
    float a = 1.124;
    Particle list[num_particles];
    LJ lj = LJ();
    time_t  t1,t2;
    t1 = clock();
    //Initialising the particles
    int count = 0;
    for(int i =0 ; i< pow(num_particles,0.5) ; i++)
    {
        for (int j=0; j< pow(num_particles,0.5);j++)
        {
            float r = (rand() / (float)RAND_MAX * 1) + 1;
            cout<<"Random number"<<r;
            list[count] = Particle(a*i,a*j,num_particles);
            count++;
        }
    }

    //
    for(int t=0 ;t<3000;t++)
    {
        cout<<"Time elapsed : "<<(clock() -t1)<<endl;
        lj.set_force_zero(list,num_particles);
        for(int i=0;i<num_particles;i++)
        {
            for(int j=i+1;j<num_particles;j++)
            {
                    lj.distance_calculate(list[i],list[j],num_particles);
            }
        }

        for(int i=0;i<num_particles;i++)
        {
            list[i].motion_equation();
        }
    }
    t2=clock();
    cout<<"Total time (in ticks)"<<t2-t1<<" (in seconds) "<<(t2-t1)/CLOCKS_PER_SEC;
    for(int i =0;i<num_particles;i++)
    {
        cout<<"Particle "<<i+1;
        list[i].printParticle();
    }

    return 0;
}