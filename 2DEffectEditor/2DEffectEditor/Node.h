//------------------------------------------------------------------------
// @file	Node.h
// @brief	親子関係の構築
// @date	2017/09/27
// @author	GS2 21 宮崎貴善
//------------------------------------------------------------------------
#pragma once

#ifndef NODE
#define NODE

#include <vector>
#include <Memory>
#include "Vector2.h"

class Image;
class Transform;

// Nodeクラス
class Node
{
public:
	// コンストラクタ
	Node();
	Node(const Node& node) {};
	// デストラクタ
	~Node();

	// Getter //////////////////////////////////////////////////////////////

	// トランスフォーム
	std::vector<Transform*> GetTransform() { return m_Transform; }

	//const std::vector<std::unique_ptr<Transform>>& GetTransform() { return m_Transform; }
	// 親
	Node* GetParent() { return m_Parent; }
	// 画像	
	Image* GetImage() { return m_Image; }

	// 画像	
	const std::string& GetTag() { return m_Tag; }

	// Setter //////////////////////////////////////////////////////////////

	// トランスフォーム
	void SetTransform(std::vector<Transform*> transform) { m_Transform = transform; }
	//void SetTransform(const std::vector<std::unique_ptr<Transform>>& transform) { m_Transform = transform; }
	// 親
	void SetParent(Node* parent) { m_Parent = parent; }
	// 画像
	void SetImage(Image* image) { m_Image = image; }

	// 画像
	void SetTag(const std::string& Tag) { m_Tag = Tag; }

private:
	std::vector<Transform*> m_Transform; // トランスフォーム
	//std::vector<std::unique_ptr<Transform>> m_Transform;
	Node*   m_Parent;					// 親
	Image*  m_Image;					// 画像

	std::string m_Tag;
};


// Transformクラス
class Transform
{
public:
	// コンストラクタ
	Transform();
	// デストラクタ
	~Transform();

	// Getter //////////////////////////////////////////////////////////////

	// 座標
	const Vector2& GetPosition() { return m_Position; }
	// 拡大率
	const Vector2& GetScale() { return m_Scale; }
	// 回転
	const float& GetRotate() { return m_Rotate; }

	// Setter //////////////////////////////////////////////////////////////

	// 座標
	void SetPosition(const Vector2& position) { m_Position = position; }
	// 拡大率
	void SetScale(const Vector2& scale) { m_Scale = scale; }
	// 回転
	void SetRotate(const float& rotate) { m_Rotate = rotate; }
	
private:
	Vector2 m_Position;		// 座標
	Vector2 m_Scale;		// 拡大率
	float	m_Rotate;		// 回転
};

#endif	// NODE