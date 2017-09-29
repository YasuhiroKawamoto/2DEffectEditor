#pragma once

class Vector2
{
private:

public:

	float x;
	float y;

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