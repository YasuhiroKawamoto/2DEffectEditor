#pragma once


#include <vector>
#include <Memory>
#include "Node.h"



class NodeManager
{
public:
	// NodeManagerクラスのインスタンスを取得する
	static std::unique_ptr<NodeManager> GetInstance();

private:
	// NodeManagerクラスのインスタンス
	static std::unique_ptr<NodeManager> m_Manager;

public:
	// コンストラクタ
	NodeManager();
	void CreateNode(const std::string& tag, Node* parent = nullptr);

	Node* SearchNode(std::string tag);

private:
	

	std::vector<std::unique_ptr<Node>> m_NodeArray;
};
