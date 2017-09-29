#pragma once


#include <vector>
#include <Memory>
#include "Node.h"



class NodeManager
{
public:
	// NodeManager�N���X�̃C���X�^���X���擾����
	static std::unique_ptr<NodeManager> GetInstance();

private:
	// NodeManager�N���X�̃C���X�^���X
	static std::unique_ptr<NodeManager> m_Manager;

public:
	// �R���X�g���N�^
	NodeManager();
	void CreateNode(const std::string& tag, Node* parent = nullptr);

	Node* SearchNode(std::string tag);

private:
	

	std::vector<std::unique_ptr<Node>> m_NodeArray;
};
