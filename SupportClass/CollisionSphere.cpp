#include "CollisionSphere.h"

CollisionSphere::CollisionSphere()
{
    r=0;
}
CollisionSphere::CollisionSphere(const Vector3d &vec, float rad)
{
    center.change(vec);
    r=rad;
}