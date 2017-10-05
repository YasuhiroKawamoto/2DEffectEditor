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
#include <vcclr.h>  
#include "Vector2.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;


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
	gcroot<Image^> GetImage() { return m_Image; }

	// 画像	
	const std::string& GetTag() { return m_Tag; }

	// Setter //////////////////////////////////////////////////////////////

	// トランスフォーム
	void SetTransform(std::vector<Transform*> transform) { m_Transform = transform; }
	//void SetTransform(const std::vector<std::unique_ptr<Transform>>& transform) { m_Transform = transform; }
	// 親
	void SetParent(Node* parent) { m_Parent = parent; }
	// 画像
	void SetImage(gcroot<Image^> image) { m_Image = image; }

	// 画像
	void SetTag(const std::string& Tag) { m_Tag = Tag; }


	//更新
	void Update(float frame);

	void Draw(Graphics^ gr);



private:
	std::vector<Transform*> m_Transform; // トランスフォーム
										 //std::vector<std::unique_ptr<Transform>> m_Transform;
	Node* m_Parent;				// 親
	gcroot<Image^> m_Image;				// 画像

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

	// 座標の取得
	Vector2& GetPosition() { return m_Position; }
	// 拡大率の取得
	const Vector2& GetScale() { return m_Scale; }
	// 回転の取得
	const float& GetRotate() { return m_Rotate; }
	// 移動量の取得
	const float& GetMoveAmount() { return m_MoveAmount; }
	// 移動方向の取得
	const float& GettMoveAngle() { return m_MoveAngle; }

	// Setter //////////////////////////////////////////////////////////////

	// 座標の設定
	void SetPosition(const Vector2& position) { m_Position = position; }
	// 拡大率の設定
	void SetScale(const Vector2& scale) { m_Scale = scale; }
	// 回転の設定
	void SetRotate(const float& rotate) { m_Rotate = rotate; }

	// 移動量の設定
	void SetMoveAmount(float amount) { m_MoveAmount = amount; }
	// 移動方向の設定
	void SetMoveAngle(float angle) { m_MoveAngle = angle; }

	// 座標の更新
	void Update(float frame);


private:
	Vector2 m_Position;		// 座標
	Vector2 m_Scale;		// 拡大率
	float	m_Rotate;		// 回転

	float m_MoveAngle;				// 移動方向
	float m_MoveAmount;				// 移動量



};

#endif	// NODE