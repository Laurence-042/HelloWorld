#include<iostream>
using namespace std;

class Vector3{
private:

public:
    float x;
    float y;
    float z;

	Vector3();
    Vector3(float in_x,float in_y,float in_z);

    void Show();
	
    static float Dot(Vector3 a,Vector3 b);
	
	static Vector3 Normalization(Vector3 a);

	Vector3 operator*(const float &A)const;
	Vector3 operator*(const int &A)const;
	Vector3 operator+(const Vector3 &b)const;
	Vector3 operator-(const Vector3 &b)const;
};

class Missle
{
public:
	Missle(Vector3 pos ,Vector3 dir,float speed);
	Vector3 m_pos;
	Vector3 m_direction;
	float m_speed;

	void fly();

protected:

private:
};

