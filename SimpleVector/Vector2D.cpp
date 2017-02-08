
#include "Vector2D.h"

const FVector2D FVector2D::ZeroVector2D(0.0, 0.0);

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

float FVector2D::CrossProduct(const FVector2D& A, const FVector2D& B)
{
	return A.X*B.Y-A.Y*B.X;
}

FVector2D FVector2D::DotProduct(const FVector2D& A, const FVector2D& B)
{
	return FVector2D(A.X*B.X, A.Y*B.Y);
}

