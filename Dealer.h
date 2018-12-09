//=======================================================================================
// Dealer.h
// ディーラー関連のヘッダーファイル
//=======================================================================================

// 多重インクルードの防止
#ifndef INCLUDE_DealerHeader
#define INCLUDE_DealerHeader

//#include "CardManager.h"
#include "Player.h"
#include "Hand.h"
#include "Wallet.h"

class Dealer
{
	//　データメンバの宣言
private:
	Player* m_player;
	Hand* m_hand;
	Wallet* m_wallet;

	//　メンバ関数の宣言
public:
	// コンストラクタ
	Dealer();
	// デストラクタ
	~Dealer();

public:
	// 操作
	void OneCardAddDealerHands();
	void TwoCardsAddDealerHands();
	void ShowDealerHands();
	void ShowDealerWallet();
	void ShowDealerTotalRank();
	void GetDealerCoin();

};

#endif
