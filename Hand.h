//=======================================================================================
// Hand.h
// トランプ関連のヘッダーファイル
//=======================================================================================

// 多重インクルードの防止
#ifndef INCLUDE_HandHeader
#define INCLUDE_HandHeader

#include "Card.h"

class Hand
{
	//　データメンバの宣言
private:
	Card* m_card[11];
	int m_count;
	int m_rankCount;

	//　メンバ関数の宣言
public:
	// コンストラクタ
	Hand();
	// デストラクタ
	~Hand();

public:
	// 操作
	void AddHand(Card* card);
	void ShowHand();
	void ShowDealerHand();
	void TotalRankInHands();
	int Judge();

};

#endif