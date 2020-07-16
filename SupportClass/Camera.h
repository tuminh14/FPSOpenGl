#ifndef FPS_CAMERA_H
#define FPS_CAMERA_H
#include "Vector3d.h"
#include <cmath>
#include <iostream>
#include <SDL2/SDL.h>
#include <GL/glut.h>

class Camera {
    Vector3d loc;
    float camPitch, camYaw;
    float movevel;
    float mousevel;
    bool mi;
    void lockCamera();
    void moveCamera(float dir);
    void moveCameraUp(float dir);
    public:
        Camera();
        Camera(Vector3d l);
        Camera(Vector3d l, float yaw, float pitch);
        Camera(Vector3d l, float yaw, float pitch, float mv, float mov);
        void Control();
        void UpdateCamera();
        Vector3d getVector();
        Vector3d getLocation();
        float getPitch();
        float getYaw();
        float getMovevel();
        float getMousevel();
        bool isMouseIn();


        void setLocation(Vector3d vec);
        void lookAt(float pitch, float yaw);
        void mouseIn(bool b);
        void setSpeed(float mv, float mov);

};


#endif //FPS_CAMERA_H
