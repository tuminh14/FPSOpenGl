#ifndef FPS_COLLISIONSPHERE_H
#define FPS_COLLISIONSPHERE_H
#include "Vector3d.h"

class CollisionSphere {
    public:
        float r;
        Vector3d center;
        CollisionSphere();
        CollisionSphere(const Vector3d& vec, float rad);
};


#endif //FPS_COLLISIONSPHERE_H
