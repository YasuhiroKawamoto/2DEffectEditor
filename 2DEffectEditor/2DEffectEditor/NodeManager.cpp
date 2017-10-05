#include "NodeManager.h"

using namespace std;


// static‚ÌŽÀ‘Ì‰»
//unique_ptr<NodeManager> NodeManager::m_Manager;
NodeManager* NodeManager::m_Manager;

NodeManager* NodeManager::GetInstance()
{
	if (m_Manager == nullptr)
	{
		return nullptr;
	}
	return m_Manager;
}

NodeManager::NodeManager()
{
	m_Manager = this;
	for (vector<unique_ptr<Node>>::iterator it = m_NodeArray.begin();
		it != m_NodeArray.end();
		it++)
	{
		(*it) = make_unique<Node>();
	}

	m_Node = nullptr;
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
	for (vector<unique_ptr<Node>>::size_type i = 0; i < m_NodeArray.size(); i++)
	{
		if (m_NodeArray[i]->GetTag() == tag)
		{
			//m_Node.reset(m_NodeArray[i].get());
			return m_NodeArray[i].get();
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
	for (vector<unique_ptr<Node>>::size_type i = 0; i < m_NodeArray.size(); i++)
	{
		if (m_NodeArray[i] == nullptr && m_NodeArray[i]->GetTag() == tag)
		{
			m_NodeArray.clear();
			return nullptr;
		}
	}
	return nullptr;
}

void NodeManager::SetNode(std::string tag, Node* node)
{
	for (vector<unique_ptr<Node>>::iterator it = m_NodeArray.begin();
		it != m_NodeArray.end();)
	{
		if ((*it)->GetTag() == tag)
		{
			(*it).reset(node);
			return;
		}
		else
		{
			it++;
		}
	}
	return;
}

vector<std::unique_ptr<Node>>& NodeManager::GetNodes()
{
	return m_NodeArray;
}
