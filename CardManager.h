//=======================================================================================
// CardManager.h
// カード管理関連のヘッダーファイル
//=======================================================================================

// 多重インクルードの防止
#ifndef INCLUDE_CardManagerHeader
#define INCLUDE_CardManagerHeader

#include "Card.h"
#include "Singleton.h"
#include <vector>

class CardManager:public Singleton<CardManager>
{
public:
	friend class Singleton<CardManager>; // Singleton でのインスタンス作成は許可

	// データメンバの宣言
private:
	std::vector<Card*> m_deck;
	Card* m_list[52];

	// メンバ関数の宣言
private:
	// コンストラクタ
	CardManager();
public:
	// デストラクタ
	~CardManager();

public:
	// 操作
	void CreateDeck();
	Card* DrawCard();
	void ShowDeck();
	void ShuffleCards();

};

#endif
