//------------------------------------------------------------------------
// @file	Node.h
// @brief	親子関係の構築
// @date	2017/09/27
// @author	GF2 21 宮崎貴善
//------------------------------------------------------------------------
#pragma once
#ifndef NODE
#define NODE

class Vector2;
class Image;

class Node
{
public:
	// コンストラクタ
	Node();
	// デストラクタ
	~Node();

	// Getter //////////////////////////////////////////////////////////////

	// 座標
	const Vector2& GetPosition() { return m_Position; }
	// 拡大率
	const Vector2& GetScale() { return m_Scale; }
	// 回転
	const float& GetRotate() { return m_Rotate; }
	// 親
	Node* GetParent() { return m_Parent; }
	// 画像	
	Image* GetImage() { return m_Image; }

	// Setter //////////////////////////////////////////////////////////////

	// 座標
	void SetPosition(const Vector2& position) { m_Position = position; }
	// 拡大率
	void SetScale(const Vector2& scale) { m_Scale = scale; }
	// 回転
	void SetRotate(const float& rotate) { m_Rotate = rotate; }
	// 親
	void SetParent(Node* parent) { m_Parent = parent; }
	// 画像
	void SetImage(Image* image) { m_Image = image; }

private:
	Vector2 m_Position;		// 座標
	Vector2 m_Scale;		// 拡大率
	float	m_Rotate;		// 回転
	Node*   m_Parent;		// 親
	Image*  m_Image;		// 画像
};

#endif	// NODE