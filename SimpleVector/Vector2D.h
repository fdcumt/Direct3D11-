#pragma once


class FVector2D 
{
public:
	float X;
	float Y;

public:
	static const FVector2D ZeroVector2D;

public:
	FVector2D();
	FVector2D(float InX, float InY);
	FVector2D(const FVector2D& InVector2D);
	
public:
	FVector2D operator+ (const FVector2D& InV) const;
	FVector2D operator- (const FVector2D& InV) const;

	static float CrossProduct(const FVector2D& A, const FVector2D& B);
	static FVector2D DotProduct(const FVector2D& A, const FVector2D& B);


};




