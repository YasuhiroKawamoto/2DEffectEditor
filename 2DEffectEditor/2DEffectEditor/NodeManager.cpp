#include "NodeManager.h"

using namespace std;


// staticの実体化
unique_ptr<NodeManager> NodeManager::m_Manager;

std::unique_ptr<NodeManager> NodeManager::GetInstance()
{
	if (m_Manager == nullptr)
	{
		// オブジェクを生成する
		m_Manager = make_unique<NodeManager>();
	}
	return move(m_Manager);
}

NodeManager::NodeManager()
{
	for (vector<unique_ptr<Node>>::iterator it = m_NodeArray.begin();
		it != m_NodeArray.end();
		it++)
	{
		(*it) = make_unique<Node>();
	}
}

void NodeManager::CreateNode(const std::string& tag, Node * parent)
{
	unique_ptr<Node> node;
	node = make_unique<Node>();
	node->SetParent(parent);
	node->SetTag(tag);
	m_NodeArray.push_back(move(node));
}

Node * NodeManager::SearchNode(std::string tag)
{
	for (vector<unique_ptr<Node>>::iterator it = m_NodeArray.begin();
		it != m_NodeArray.end();)
	{
		if ((*it)->GetTag() == tag)
		{
			return (*it).get();
		}
		else
		{
			it++;
		}		
	}
	/*for (vector<Node*>::iterator it = m_NodeArray.begin();
		it != m_NodeArray.end();)
	{
		if ((*it)->GetTag() == tag)
		{
			return (*it);
		}
		else
		{
			it++;
		}
	}*/
	return nullptr;
}

Node * NodeManager::DeleteNode(std::string tag)
{
	for (vector<unique_ptr<Node>>::iterator it = m_NodeArray.begin();
		it != m_NodeArray.end();)
	{
		if ((*it)->GetTag() == tag)
		{
			it = m_NodeArray.erase(it);
			return nullptr;
		}
		else
		{
			it++;
		}
	}
	return nullptr;
}
