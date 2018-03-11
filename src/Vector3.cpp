#include"C:\Users\Laurence_042\Documents\GitHub\HelloWorld\include\Vector3.h"
#include<math.h>
Vector3::Vector3() {
	x = 0;
	y = 0;
	z = 0;
}

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

Vector3 Vector3 ::operator*(const float &b)const {
	Vector3 out(this->x*b, this->y*b, this->z*b);
	return out;
}
Vector3 Vector3 ::operator*(const int &b)const {
	Vector3 out(this->x*b, this->y*b, this->z*b);
	return out;
}

Vector3 Vector3::Normalization(Vector3 a) {
	float num = a.x*a.x + a.y*a.y + a.z*a.z;
	num = sqrt(num);

	Vector3 out(a.x / num, a.y / num, a.z / num);
	return out;
}

Vector3 Vector3::operator+(const Vector3 &b)const {
	Vector3 out(0, 0, 0);
	out.x = this->x + b.x;
	out.y = this->y + b.y;
	out.z = this->z + b.z;
	return out;
}

Vector3 Vector3::operator-(const Vector3 &b)const {
	Vector3 out(0, 0, 0);
	out.x = this->x - b.x;
	out.y = this->y - b.y;
	out.z = this->z - b.z;
	return out;
}
