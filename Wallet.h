//=======================================================================================
// Wallet.h
// ウォレット関連のヘッダーファイル
//=======================================================================================

// 多重インクルードの防止
#ifndef INCLUDE_WalletHeader
#define INCLUDE_WalletHeader

#include "Coin.h"
#include <vector>

class Wallet
{
	//　データメンバの宣言
private:
	std::vector<Coin*> m_coin;
	int m_count;

	//　メンバ関数の宣言
public:
	// コンストラクタ
	Wallet();
	// デストラクタ
	~Wallet();

public:
	// 操作
	void AddWallet(Coin* coin);
	void ShowWallet();
	void BetCoin(int &bet);

};

#endif

