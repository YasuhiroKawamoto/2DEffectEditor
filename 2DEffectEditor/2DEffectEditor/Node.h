//------------------------------------------------------------------------
// @file	Node.h
// @brief	�e�q�֌W�̍\�z
// @date	2017/09/27
// @author	GF2 21 �{��M�P
//------------------------------------------------------------------------
#pragma once
#ifndef NODE
#define NODE

class Vector2;
class Image;

class Node
{
public:
	// �R���X�g���N�^
	Node();
	// �f�X�g���N�^
	~Node();

	// Getter //////////////////////////////////////////////////////////////

	// ���W
	const Vector2& GetPosition() { return m_Position; }
	// �g�嗦
	const Vector2& GetScale() { return m_Scale; }
	// ��]
	const float& GetRotate() { return m_Rotate; }
	// �e
	Node* GetParent() { return m_Parent; }
	// �摜	
	Image* GetImage() { return m_Image; }

	// Setter //////////////////////////////////////////////////////////////

	// ���W
	void SetPosition(const Vector2& position) { m_Position = position; }
	// �g�嗦
	void SetScale(const Vector2& scale) { m_Scale = scale; }
	// ��]
	void SetRotate(const float& rotate) { m_Rotate = rotate; }
	// �e
	void SetParent(Node* parent) { m_Parent = parent; }
	// �摜
	void SetImage(Image* image) { m_Image = image; }

private:
	Vector2 m_Position;		// ���W
	Vector2 m_Scale;		// �g�嗦
	float	m_Rotate;		// ��]
	Node*   m_Parent;		// �e
	Image*  m_Image;		// �摜
};

#endif	// NODE