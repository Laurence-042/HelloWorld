#include"C:\Users\Laurence_042\Documents\GitHub\HelloWorld\include\Vector3.h"
Missle::Missle(Vector3 pos ,Vector3 dir,float speed)
{
	m_pos = pos;
	m_direction = dir;
	m_speed = speed;
}

void Missle::fly() {
	Vector3 dir = Vector3::Normalization(this->m_direction);
	this->m_pos = this->m_pos + dir * this->m_speed;
}
