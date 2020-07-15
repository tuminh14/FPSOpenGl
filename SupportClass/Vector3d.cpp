#include "Vector3d.h"

Vector3d::Vector3d()
{
    x=y=z=0;
}
Vector3d::Vector3d(float a, float b)
{
    x=a;
    y=b;
    z=0;
}
Vector3d::Vector3d(float a, float b, float c)
{
    x=a;
    y=b;
    z=c;
}

float Vector3d::dotProduct(const Vector3d& vec2)
{
    return (x*vec2.x+y*vec2.y+z*vec2.z);
}
Vector3d Vector3d::crossProduct(const Vector3d& vec2)
{
    return Vector3d();
}
float Vector3d::lenght()
{
    return sqrt(x*x + y*y + z*z);
}
void Vector3d::normalize()
{
    float len = lenght();
    if(len!=0)
    {
        x/=len;
        y/=len;
        z/=len;
    }
}

void Vector3d::change(float a, float b, float c)
{
    x=a;
    y=b;
    z=c;
}
void Vector3d::change(Vector3d& vec2)
{
    x=vec2.x;
    y=vec2.y;
    z=vec2.z;
}
void Vector3d::change(Vector3d vec2)
{
    x=vec2.x;
    y=vec2.y;
    z=vec2.z;
}
void Vector3d::changeX(float a)
{
    x=a;
}
void Vector3d::changeY(float a)
{
    y=a;
}
void Vector3d::changeZ(float a)
{
    z=a;
}

Vector3d Vector3d::operator+(const Vector3d& vec2)
{
    return Vector3d(x + vec2.x, y + vec2.y, z + vec2.z);
}
Vector3d Vector3d::operator-(const Vector3d& vec2)
{
    return Vector3d(x - vec2.x, y - vec2.y, z - vec2.z);
}
Vector3d Vector3d::operator*(float num)
{
    return Vector3d(x * num, y * num, z * num);
}
Vector3d Vector3d::operator/(float num)
{
    if(num!=0)
    {
        return Vector3d(x / num, y / num, z / num);
    }
    else
        return Vector3d();
}

Vector3d& Vector3d::operator+=(const Vector3d& vec2)
{
    x+=vec2.x;
    y+=vec2.y;
    z+=vec2.z;
    return *this;
}
Vector3d& Vector3d::operator-=(const Vector3d& vec2)
{
    x-=vec2.x;
    y-=vec2.y;
    z-=vec2.z;
    return *this;
}
Vector3d& Vector3d::operator*=(float num)
{
    x*=num;
    y*=num;
    z*=num;
    return *this;
}
Vector3d& Vector3d::operator/=(float num)
{
    if(num!=0)
    {
        x /= num;
        y /= num;
        z /= num;
    }
    return *this;
}

bool Vector3d::operator==(const Vector3d vec2)
{
    return (x==vec2.x && y==vec2.y && z==vec2.z);
}
bool Vector3d::operator!=(const Vector3d vec2)
{
    return (x!=vec2.x || y!=vec2.y || z!=vec2.z);
}


