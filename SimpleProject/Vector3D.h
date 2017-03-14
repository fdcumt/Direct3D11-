#pragma once

class Vector3D
{
public:
	Vector3D(float InX, float InY, float InZ);

public:
	static const Vector3D ZeroVector3D; // (0.0, 0.0, 0.0)
	static const Vector3D UpVector3D; // (0.0, 0.0, 1.0)
	static const Vector3D ForwardVector3D; // (1.0, 0.0, 0.0)
	static const Vector3D RightVector3D; // (0.0, 1.0, 0.0)

public:
	Vector3D& operator=(const Vector3D& v) ;
	Vector3D operator+(const Vector3D& v) const;
	Vector3D operator-(const Vector3D& v) const;
	Vector3D operator*(const float Scale) const;

	friend Vector3D operator*(const float Scale, const Vector3D& v);
	friend Vector3D operator*(const int Scale, const Vector3D& v);

public:
	float X;
	float Y;
	float Z;

};

Vector3D operator*(const float Scale, const Vector3D& v);
Vector3D operator*(const int Scale, const Vector3D& v);


