//=======================================================================================
// Player.h
// トランプ関連のヘッダーファイル
//=======================================================================================

// 多重インクルードの防止
#ifndef INCLUDE_PlayerHeader
#define INCLUDE_PlayerHeader

#include "Hand.h"
#include "Wallet.h"

class Player
{
	//　データメンバの宣言
private:
	Hand* m_hand;
	Wallet* m_wallet;

	//　メンバ関数の宣言
public:
	// コンストラクタ
	Player();
	// デストラクタ
	~Player();

public:
	// 操作
	void OneCardAddPlayerHands();
	void TwoCardsAddPlayerHands();
	void ShowPlayerHands();
	void ShowPlayerWallet();
	void ShowPlayerTotalRank();
	void GetPlayerCoin();
	void BetCoins(int bet);

};

#endif

