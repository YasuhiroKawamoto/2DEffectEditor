#include "Node.h"

using namespace std;

// コンストラクタ
Node::Node()
{
	m_Rotate = 0.0f;
	m_Parent = nullptr;
	m_Image = nullptr;
}

// デストラクタ
Node::~Node()
{
}
