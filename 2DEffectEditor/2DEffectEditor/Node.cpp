#include "Node.h"

using namespace std;

// Node�N���X //////////////////////////////////////////////////////////////////////////////////////////////////

// �R���X�g���N�^
Node::Node()
{	
	m_Transform.resize(1);
	for (vector<Transform*>::iterator it = m_Transform.begin();
		it != m_Transform.end();
		it++)
	{
		(*it) = new Transform();
	}
	/*for (vector<std::unique_ptr<Transform>>::iterator it = m_Transform.begin();
		it != m_Transform.end();
		it++)
	{
		(*it) = make_unique<Transform>();
	}*/
	m_Parent = nullptr;
	m_Image = nullptr;
}

// �f�X�g���N�^
Node::~Node()
{
	for (vector<Transform*>::iterator it = m_Transform.begin();
		it != m_Transform.end();
		it++)
	{
		delete (*it);
	}
}


// Transform�N���X ///////////////////////////////////////////////////////////////////////////////////////////

// �R���X�g���N�^
Transform::Transform()
{
	m_Rotate = 0.0f;
}

// �f�X�g���N�^
Transform::~Transform()
{
}
