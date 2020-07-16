#include "Camera.h"


void Camera::lockCamera()
{
    if(camPitch>90)
        camPitch=90;
    if(camPitch<-90)
        camPitch=-90;
    if(camYaw<0.0)
        camYaw+=360.0;
    if(camYaw>360.0)
        camYaw-=360;
}
void Camera::moveCamera(float dir)
{
    float rad=(camYaw+dir)*M_PI/180.0;
    loc.x-=sin(rad)*movevel;
    loc.z-=cos(rad)*movevel;
}
void Camera::moveCameraUp(float dir)
{
    float rad=(camPitch+dir)*M_PI/180.0;
    loc.y+=sin(rad)*movevel;
}

Camera::Camera()
{
    camYaw=0.0;
    camPitch=0.0;
    movevel=0.2;
    mousevel=0.2;
    mi=false;
}
Camera::Camera(Vector3d l)
{
    loc.change(l.x,l.y,l.z);
    camYaw=0.0;
    camPitch=0.0;
    movevel=0.2;
    mousevel=0.2;
    mi=false;

}
Camera::Camera(Vector3d l, float yaw, float pitch)
{
    loc.change(l.x,l.y,l.z);
    camYaw=yaw;
    camPitch=pitch;
    movevel=0.2;
    mousevel=0.2;
    mi=false;
}
Camera::Camera(Vector3d l, float yaw, float pitch, float mv, float mov)
{
    loc.change(l.x,l.y,l.z);
    camYaw=yaw;
    camPitch=pitch;
    movevel=mv;
    mousevel=mov;
    mi=false;
}
void Camera::Control()
{
    if(mi)
    {
        int MidX=320;
        int MidY=240;
        SDL_ShowCursor(SDL_DISABLE);
        int tmpx,tmpy;
        SDL_GetMouseState(&tmpx,&tmpy);
        camYaw+=mousevel*(MidX-tmpx);
        camPitch+=mousevel*(MidY-tmpy);
        lockCamera();
        SDL_WarpMouseGlobal(MidX,MidY);
        Uint8* state = const_cast<Uint8 *>(SDL_GetKeyboardState(NULL));
        if(state[SDLK_w])
        {
            moveCamera(0.0);
        }else if(state[SDLK_s])
        {
            moveCamera(180.0);
        }
        if(state[SDLK_a])
            moveCamera(90.0);
        else if(state[SDLK_d])
            moveCamera(270);
    }

    glRotatef(-camPitch,1.0,0.0,0.0);
    glRotatef(-camYaw,0.0,1.0,0.0);
}

void Camera::UpdateCamera()
{
    glTranslatef(-loc.x,-loc.y,-loc.z);
}
Vector3d Camera::getVector()
{
    return (Vector3d(-cos(camPitch*M_PI/180.0)*sin(camYaw*M_PI/180.0),sin(camPitch*M_PI/180.0),-cos(camPitch*M_PI/180.0)*cos(camYaw*M_PI/180.0)));
}
Vector3d Camera::getLocation()
{
    return loc;
}
float Camera::getPitch()
{
    return camPitch;
}

float Camera::getYaw()
{
    return camYaw;
}
float Camera::getMovevel()
{
    return movevel;
}
float Camera::getMousevel()
{
    return mousevel;
}
bool Camera::isMouseIn()
{
    return mi;
}


void Camera::setLocation(Vector3d vec)
{
    loc.change(vec.x,vec.y,vec.z);
}
void Camera::lookAt(float pitch, float yaw)
{
    camPitch = pitch;
    camYaw = yaw;
}
void Camera::mouseIn(bool b)
{
    mi = b;
}
void Camera::setSpeed(float mv, float mov)
{
    movevel = mv;
    mousevel = mov;
}