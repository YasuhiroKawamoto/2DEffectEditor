#pragma once


#include <vector>
#include <Memory>
#include "Node.h"



class NodeManager
{
public:
	// NodeManager�N���X�̃C���X�^���X���擾����
	//static std::unique_ptr<NodeManager> GetInstance();
	static NodeManager* GetInstance();
private:
	// NodeManager�N���X�̃C���X�^���X
	static NodeManager* m_Manager;

public:
	// �R���X�g���N�^
	NodeManager();
	void CreateNode(const std::string& tag, Node* parent = nullptr);

	Node* SearchNode(std::string tag);
	Node* DeleteNode(std::string tag);

	Node* GetNode() { return m_Node; }
	void SetSelectNode(Node* node) { m_Node = node; };
	void SetNode(std::string tag, Node* node);
	std::vector<std::unique_ptr<Node>>& GetNodes();

private:

	Node* m_Node;
	std::vector<std::unique_ptr<Node>> m_NodeArray;

};
