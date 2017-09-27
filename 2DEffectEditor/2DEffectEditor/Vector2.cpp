#include "Vector2.h"

// コントラクタ
Vector2::Vector2()
	:x(0),y(0)
{
}

// デストラクタ
Vector2::~Vector2()
{
}

Vector2 Vector2::operator+(const Vector2 & vec)
{
	Vector2 v;
	v.x = this->x + vec.x;
	v.y = this->y + vec.y;

	return v;
}

Vector2 Vector2::operator-(const Vector2 & vec)
{
	Vector2 v;
	v.x = this->x - vec.x;
	v.y = this->y - vec.y;

	return v;
}

bool Vector2::operator==(const Vector2 & vec)
{
	if (this->x == vec.x && this->y == vec.y) return true;
	
	return false;
}

bool Vector2::operator!=(const Vector2 & vec)
{
	if (this->x != vec.x || this->y != vec.y) return true;
	
	return false;
}