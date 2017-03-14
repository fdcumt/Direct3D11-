
#include "Vector2D.h"


FVector2D::FVector2D(float x, float y)
	:X(x), Y(y)
{

}

const FVector2D FVector2D::ZeroVector(0.0, 0.0);
const FVector2D FVector2D::UnitVector(1.0, 1.0);

FVector2D FVector2D::operator+(const FVector2D& v) const
{
	return FVector2D(X+v.X, Y+v.Y);
}

FVector2D& FVector2D::operator=(const FVector2D& v)
{
	this->X = v.X;
	this->Y = v.Y;
	return *this;
}

FVector2D FVector2D::operator-(const FVector2D& v) const
{
	return FVector2D(X - v.X, Y - v.Y);
}

FVector2D FVector2D::operator*(float Scale) const
{
	return FVector2D(X*Scale, Y*Scale);
}

FVector2D operator*(float Scale, const FVector2D& v)
{
	return FVector2D(v.X*Scale, v.Y*Scale);
}

