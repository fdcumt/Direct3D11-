
#include "utility/common.h"
#include "Vector2D.h"

const FVector2D FVector2D::ZeroVector2D(0.0, 0.0);
const FVector2D FVector2D::UnitVector2D(1.0, 1.0);

FVector2D::FVector2D(float InX, float InY)
	: X(InX), Y(InY)
{
}

FVector2D::FVector2D()
	: X(0.0), Y(0.0)
{

}

FVector2D::FVector2D(const FVector2D& InVector2D)
	: X(InVector2D.X), Y(InVector2D.Y)
{
}

FVector2D FVector2D::operator+(const FVector2D& InV) const
{
	return FVector2D(X + InV.X, Y + InV.Y);
}

FVector2D FVector2D::operator-(const FVector2D& InV) const
{
	return FVector2D(X - InV.X, Y - InV.Y);
}

FVector2D FVector2D::operator*(const float& k) const
{
	return FVector2D(X*k, Y*k);
}

FVector2D FVector2D::operator/(const float& k) const
{
	ASSERT(k!=0);
	return FVector2D();
}

float FVector2D::CrossProduct(const FVector2D& A, const FVector2D& B)
{
	return A.X*B.Y-A.Y*B.X;
}

FVector2D FVector2D::DotProduct(const FVector2D& A, const FVector2D& B)
{
	return FVector2D(A.X*B.X, A.Y*B.Y);
}

