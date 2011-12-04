#ifndef MASTERWORLD_H_INCLUDED
#define MASTERWORLD_H_INCLUDED


#ifdef __cplusplus
extern "C" {
#endif

struct Points
{
   unsigned char r,g,b;
   unsigned char exists;
   unsigned char size;
   float x,y,z;
};


struct Agents
{
   float x,y,z;
   float heading;
   float pitch;
   float yaw;
};


int Add3DPoint(float x,float y,float z , unsigned char r ,unsigned char g ,unsigned char b);
int SetAgent(unsigned int agent_num,float x,float y,float z , float heading , float pitch , float yaw);
int GetAgent(unsigned int agent_num,float * x,float * y,float * z , float * heading , float * pitch , float * yaw);
int PrintFAgent(unsigned int agent_num);


#ifdef __cplusplus
}
#endif


#endif // MASTERWORLD_H_INCLUDED
