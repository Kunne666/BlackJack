//=======================================================================================
// C++授業   　　：　2018/11/27
// 先生        　：　早川先生
// 課題　　　　　：　ステータス参照
// クラス・番号　：　GF3・No.25
// 名前　　　　　：　柳瀬 拓臣
// 提出日　　　　：　2018/12/10
//=======================================================================================

// ヘッダファイルの読み込み ================================================
#pragma region<インクルード>
#include <iostream>
#include <iomanip>
#include <string>
#include "CardManager.h"
#include "Card.h"
#include "CoinManager.h"
#include "Coin.h"
#include "Player.h"
#include "Dealer.h"
#pragma endregion

using namespace std;

// メモリリークの検出の準備
#if _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif

// 定数の定義 ==============================================================

int main()
{
	// メモリリークの検出
	::_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);

	// 乱数シードの生成
	srand(static_cast<unsigned int>(time(nullptr)));

	CardManager* m_deck = CardManager::GetInstance();
	CoinManager* m_coin = CoinManager::GetInstance();

	Player* m_player = new Player;
	Dealer* m_dealer = new Dealer;

	// コインを受け取る
	m_player->GetPlayerCoin();
	m_dealer->GetDealerCoin();

	for (;;)
	{
		// ベット額を指定する ====================
		int bet = 0;

		cout << endl;
		cout << "ベット額を指定" << endl;
		cin >> bet;

		cout << bet << "枚ベットする" << endl;
		m_player->BetPlayerCoins(bet);
		m_dealer->BetDealerCoins(bet);
		// =======================================

		// トランプをシャッフルする
		m_deck->ShuffleCards();

		// カードの表示：確認用
		//m_deck->ShowDeck();

		// 所持コインの表示
		m_player->ShowPlayerWallet();
		m_dealer->ShowDealerWallet();

		// 手札へ２枚カードを配る
		cout << "====== ２枚カードを配る ======" << endl;
		m_player->TwoCardsAddPlayerHands();
		m_dealer->TwoCardsAddDealerHands();

		// DoubleDown選択 ========================
		//bool doubleDown = false;

		//cout << endl;
		//cout << "DoubleDownするか？" << endl;
		//cout << "Yes(1) / No(0)" << endl;
		//cin >> doubleDown;

		//if (doubleDown) {}

		// =======================================

		// Stand選択(Stay)

		// カードのランクの合計値が１６以下なら強制的にHitする
		//if ()
		//{
		//	m_player->OneCardAddPlayerHands();
		//}

		// ランクの合計値が２２を以上か？
		// 越えていたらコインを没収

		// ランクの合計値が２１である
		// 勝利側にベットしたコインを渡す

		// プレイヤーの手札の表示
		m_player->ShowPlayerHands();
		// プレイヤーの手札カードのランク合計値を表示
		m_player->ShowPlayerTotalRank();

		// ディーラーの手札の表示：プレイ時には１枚目のカードのみ表示
		m_dealer->ShowDealerHands();
		// ディーラーの手札カードのランク合計値を表示：プレイ時には非表示、ゲームの最後にリザルトとして表示
		m_dealer->ShowDealerTotalRank();

		// Hit選択 ===============================
		bool hit = false;

		cout << endl;
		cout << "カードを追加で引くか？" << endl;
		cout << "Yes(1) / No(0)" << endl;
		cin >> hit;

		if (hit)
			m_player->OneCardAddPlayerHands();

		// ディーラー自身が追加でカードを引くかどうか？

		// =======================================
		// プレイヤーの手札の表示
		m_player->ShowPlayerHands();
		// プレイヤーの手札カードのランク合計値を表示
		m_player->ShowPlayerTotalRank();

		// ディーラーの手札の表示：プレイ時には１枚目のカードのみ表示
		m_dealer->ShowDealerHands();
		// ディーラーの手札カードのランク合計値を表示：プレイ時には非表示、ゲームの最後にリザルトとして表示
		m_dealer->ShowDealerTotalRank();

		// ====================================================
		// ゲームを終了する 
		// ====================================================
		bool gameContinue = true;
		cout << endl;
		cout << "ゲームを続けますか？" << endl;
		cout << "Yes(1) / No(0)" << endl;
		cin >> gameContinue;

		if (!gameContinue)
		{
			break;
		}
	}

	cin.get();

	return 0;
}