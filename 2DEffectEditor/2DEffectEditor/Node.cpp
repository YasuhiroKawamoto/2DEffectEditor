#include "Node.h"


using namespace std;

// Nodeクラス //////////////////////////////////////////////////////////////////////////////////////////////////

// コンストラクタ
Node::Node()
{
	m_Transform.resize(1);
	for (vector<Transform*>::size_type i = 0; i < m_Transform.size(); i++)
	{
		m_Transform[i] = new Transform();
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
	/*for (vector<Transform*>::size_type i = 0; i < m_Transform.size(); i++)
	{
	delete m_Transform[i];
	}*/
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
	m_Position.x = 0.0f;
	m_Position.y = 0.0f;
	m_Scale.x = 0.0f;
	m_Scale.y = 0.0f;
	m_Rotate = 0.0f;
	m_MoveAngle = 0.0f;
	m_MoveAmount = 0.0f;
}

// デストラクタ
Transform::~Transform()
{
}

void Transform::Update(float frame)
{
	Vector2 vec;

	vec.x = cosf(m_MoveAngle*(3.141593f / 180)) * m_MoveAmount * (frame - 1);
	vec.y = sinf(m_MoveAngle*(3.141593f / 180)) * m_MoveAmount * (frame - 1);

	Vector2 nodeVec;
	nodeVec.x = 85;
	nodeVec.y = 85;


	SetPosition(vec + nodeVec);
}
