#pragma once

class FVector2D
{
public:
	FVector2D(float x, float y);

public:
	static const FVector2D ZeroVector;
	static const FVector2D UnitVector;

public:
	inline FVector2D operator+(const FVector2D& v) const;
	inline FVector2D& operator=(const FVector2D& v) ;
	inline FVector2D operator-(const FVector2D& v) const;
	inline FVector2D operator*(float Scale) const;

public:
	friend FVector2D operator*(float Scale, const FVector2D& v);

public:
	float X;
	float Y;
};

FVector2D operator*(float Scale, const FVector2D& v);


