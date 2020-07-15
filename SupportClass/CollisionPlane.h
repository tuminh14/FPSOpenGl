#ifndef FPS_COLLISIONPLANE_H
#define FPS_COLLISIONPLANE_H
#include "Vector3d.h"
class CollisionPlane {
    public:
        Vector3d p[4];
        Vector3d normal;
        CollisionPlane(float n1,float n2,float n3,
                float a,float b,float c,
                float d,float e,float f,
                float g,float h,float i,
                float j,float k,float l);

};


#endif //FPS_COLLISIONPLANE_H
