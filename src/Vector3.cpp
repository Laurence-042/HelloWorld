#include "Vector3.h"

Vector3::Vector3(float in_x,float in_y,float in_z){
    x=in_x;
    y=in_y;
    z=in_z;
}

void Vector3 ::Show(){
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}

float Vector3::Dot(Vector3 a,Vector3 b){
    return (a.x*b.x+a.y*b.y+a.z*b.z);

}
