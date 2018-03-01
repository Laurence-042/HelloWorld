#include<iostream>
using namespace std;

class Vector3{
private:

public:
    float x;
    float y;
    float z;

    Vector3(float in_x,float in_y,float in_z);
    void Show();
    static float Dot(Vector3 a,Vector3 b);
};


