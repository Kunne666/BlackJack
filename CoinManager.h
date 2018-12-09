//=======================================================================================
// CoinManager.h
// コイン管理関連のヘッダーファイル
//=======================================================================================

// 多重インクルードの防止
#ifndef INCLUDE_CoinManagerHeader
#define INCLUDE_CoinManagerHeader

#include "Coin.h"
#include "Singleton.h"
#include <vector>

class CoinManager :public Singleton<CoinManager>
{
public:
	friend class Singleton<CoinManager>; // Singleton でのインスタンス作成は許可

	// データメンバの宣言
private:
	std::vector<Coin*> m_coin;
	Coin* m_list[2000];

	// メンバ関数の宣言
private:
	// コンストラクタ
	CoinManager();
public:
	// デストラクタ
	~CoinManager();

public:
	// 操作
	void CreateCoin();
	Coin* DistributeCoin();
	void ShowCoin();
	void DoubleDown();

};

#endif
