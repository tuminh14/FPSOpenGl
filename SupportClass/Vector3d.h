#ifndef FPS_VECTOR3D_H
#define FPS_VECTOR3D_H
#include <iostream>
#include <cmath>

class Vector3d {
    public:
        float x,y,z;
        Vector3d();
        Vector3d(float a, float b);
        Vector3d(float a, float b, float c);

        float dotProduct(const Vector3d& vec2);
        Vector3d crossProduct(const Vector3d& vec2);
        float lenght();
        void normalize();

        void change(float a, float b, float c);
        void change(Vector3d& vec2);
        void change(Vector3d vec2);
        void changeX(float a);
        void changeY(float a);
        void changeZ(float a);

        Vector3d operator+(const Vector3d& vec2);
        Vector3d operator-(const Vector3d& vec2);
        Vector3d operator*(float num);
        Vector3d operator/(float num);

        Vector3d& operator+=(const Vector3d& vec2);
        Vector3d& operator-=(const Vector3d& vec2);
        Vector3d& operator*=(float num);
        Vector3d& operator/=(float num);

        bool operator==(const Vector3d vec2);
        bool operator!=(const Vector3d vec2);

    friend std::ostream& operator<<(std::ostream& out,const Vector3d& vec)
    {
        out << vec.x << " "<< vec.y << " "<< vec.z << std::endl;
        return out;
    }


};


#endif //FPS_VECTOR3D_H
