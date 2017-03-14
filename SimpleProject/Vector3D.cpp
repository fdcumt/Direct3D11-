
#include "Vector3D.h"


Vector3D::Vector3D(float InX, float InY, float InZ)
	:X(InX), Y(InY), Z(InZ)
{

}

Vector3D& Vector3D::operator=(const Vector3D& v)
{
	this->X = v.X;
	this->Y = v.Y;
	this->Z = v.Z;
	return *this;
}

Vector3D Vector3D::operator+(const Vector3D& v) const 
{
	return Vector3D(X+v.X, Y+v.Y, Z+v.Z);
}

Vector3D Vector3D::operator-(const Vector3D& v) const
{
	return Vector3D(X - v.X, Y - v.Y, Z - v.Z);
}

Vector3D Vector3D::operator*(const float Scale) const
{
	return Vector3D(X*Scale, Y*Scale, Z*Scale);
}

Vector3D operator*(const float Scale, const Vector3D& v)
{
	return Vector3D(v.X*Scale, v.Y*Scale, v.Z*Scale);
}

Vector3D operator*(const int Scale, const Vector3D& v)
{
	return Vector3D(v.X*Scale, v.Y*Scale, v.Z*Scale);
}

