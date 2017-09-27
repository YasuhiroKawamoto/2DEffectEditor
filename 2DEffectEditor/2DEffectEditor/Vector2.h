#pragma once

class Vector2
{
private:
	float x;
	float y;

public:
	// コンストラクタ
	Vector2();
	// デストラクタ
	~Vector2();

	// オペレータ //
	Vector2 operator+(const Vector2& vec);
	Vector2 operator-(const Vector2& vec);
	bool operator==(const Vector2& vec);
	bool operator!=(const Vector2& vec);
};