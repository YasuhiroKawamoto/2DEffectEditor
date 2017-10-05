//------------------------------------------------------------------------
// @file	Node.h
// @brief	�e�q�֌W�̍\�z
// @date	2017/09/27
// @author	GS2 21 �{��M�P
//------------------------------------------------------------------------
#pragma once

#ifndef NODE
#define NODE

#include <vector>
#include <Memory>
#include <vcclr.h>  
#include "Vector2.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;


class Transform;

// Node�N���X
class Node
{
public:
	// �R���X�g���N�^
	Node();
	Node(const Node& node) {};
	// �f�X�g���N�^
	~Node();

	// Getter //////////////////////////////////////////////////////////////

	// �g�����X�t�H�[��
	std::vector<Transform*> GetTransform() { return m_Transform; }

	//const std::vector<std::unique_ptr<Transform>>& GetTransform() { return m_Transform; }
	// �e
	Node* GetParent() { return m_Parent; }
	// �摜	
	gcroot<Image^> GetImage() { return m_Image; }

	// �摜	
	const std::string& GetTag() { return m_Tag; }

	// Setter //////////////////////////////////////////////////////////////

	// �g�����X�t�H�[��
	void SetTransform(std::vector<Transform*> transform) { m_Transform = transform; }
	//void SetTransform(const std::vector<std::unique_ptr<Transform>>& transform) { m_Transform = transform; }
	// �e
	void SetParent(Node* parent) { m_Parent = parent; }
	// �摜
	void SetImage(gcroot<Image^> image) { m_Image = image; }

	// �摜
	void SetTag(const std::string& Tag) { m_Tag = Tag; }


	//�X�V
	void Update(float frame);

	void Draw(Graphics^ gr);



private:
	std::vector<Transform*> m_Transform; // �g�����X�t�H�[��
										 //std::vector<std::unique_ptr<Transform>> m_Transform;
	Node* m_Parent;				// �e
	gcroot<Image^> m_Image;				// �摜

	std::string m_Tag;
};


// Transform�N���X
class Transform
{
public:
	// �R���X�g���N�^
	Transform();
	// �f�X�g���N�^
	~Transform();

	// Getter //////////////////////////////////////////////////////////////

	// ���W�̎擾
	Vector2& GetPosition() { return m_Position; }
	// �g�嗦�̎擾
	const Vector2& GetScale() { return m_Scale; }
	// ��]�̎擾
	const float& GetRotate() { return m_Rotate; }
	// �ړ��ʂ̎擾
	const float& GetMoveAmount() { return m_MoveAmount; }
	// �ړ������̎擾
	const float& GettMoveAngle() { return m_MoveAngle; }

	// Setter //////////////////////////////////////////////////////////////

	// ���W�̐ݒ�
	void SetPosition(const Vector2& position) { m_Position = position; }
	// �g�嗦�̐ݒ�
	void SetScale(const Vector2& scale) { m_Scale = scale; }
	// ��]�̐ݒ�
	void SetRotate(const float& rotate) { m_Rotate = rotate; }

	// �ړ��ʂ̐ݒ�
	void SetMoveAmount(float amount) { m_MoveAmount = amount; }
	// �ړ������̐ݒ�
	void SetMoveAngle(float angle) { m_MoveAngle = angle; }

	// ���W�̍X�V
	void Update(float frame);


private:
	Vector2 m_Position;		// ���W
	Vector2 m_Scale;		// �g�嗦
	float	m_Rotate;		// ��]

	float m_MoveAngle;				// �ړ�����
	float m_MoveAmount;				// �ړ���



};

#endif	// NODE