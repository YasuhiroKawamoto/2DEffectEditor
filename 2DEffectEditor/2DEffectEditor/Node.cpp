#include "Node.h"


using namespace std;

// Nodeクラス //////////////////////////////////////////////////////////////////////////////////////////////////

// コンストラクタ
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

// デストラクタ
Node::~Node()
{
	for (vector<Transform*>::iterator it = m_Transform.begin();
		it != m_Transform.end();
		it++)
	{
		delete (*it);
	}
}

void Node::Update(float frame)
{
	for (auto& trans : m_Transform)
	{
		trans->Update(frame);
	}
		
}

void Node::Draw(Graphics^ gr)
{
	gr->Clear(Color::Black);

	for (auto& trans : m_Transform)
	{
		gr->DrawImage(m_Image, trans->GetPosition().x, trans->GetPosition().y);

	}
}


// Transformクラス ///////////////////////////////////////////////////////////////////////////////////////////

// コンストラクタ
Transform::Transform()
{
	m_Rotate = 0.0f;
}

// デストラクタ
Transform::~Transform()
{
}

void Transform::Update(float frame)
{
	Vector2 vec;

	vec.x = cosf(m_MoveAngle*(3.141593f / 180)) * m_MoveAmount * (frame-1);
	vec.y = sinf(m_MoveAngle*(3.141593f / 180)) * m_MoveAmount * (frame-1);

	Vector2 nodeVec;
	nodeVec.x = 85;
	nodeVec.y = 85;


	SetPosition(vec + nodeVec);
}
