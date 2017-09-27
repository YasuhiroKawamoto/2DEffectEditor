#pragma once

class Vector2
{
private:
	float x;
	float y;

public:
	// �R���X�g���N�^
	Vector2();
	// �f�X�g���N�^
	~Vector2();

	// �I�y���[�^ //
	Vector2 operator+(const Vector2& vec);
	Vector2 operator-(const Vector2& vec);
	bool operator==(const Vector2& vec);
	bool operator!=(const Vector2& vec);
};