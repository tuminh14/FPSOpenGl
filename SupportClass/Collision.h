#ifndef FPS_COLLISION_H
#define FPS_COLLISION_H

#include "Vector3d.h"

class Collision {
    static bool raysphere(float xc,float yc,float zc,float xd,float yd,float zd,float xs,float ys,float zs,float r);
    static bool rayplane(const float& nx,float ny,float nz,float x0,float y0,float z0,float xs,float ys,float zs,float xd,float yd,float zd,Vector3d p1,Vector3d p2,Vector3d p3,Vector3d p4);
    static float trianglearea(Vector3d p1,Vector3d p2,Vector3d p3);
    static bool spheresphere(Vector3d c1,float r1,Vector3d c2,float r2);
    static float pointdistance(Vector3d c1,Vector3d c2);
    static bool sphereplane(Vector3d& sp,Vector3d pn,Vector3d p1,Vector3d p2,Vector3d p3,Vector3d p4, float r);
    static float pointdistacesquare(Vector3d p1,Vector3d p2);
    static float rayplanedist(float nx,float ny,float nz,float x0,float y0,float z0,float xs,float ys,float zs,float xd,float yd,float zd);
};


#endif //FPS_COLLISION_H
