//=======================================================================================
// Card.cpp
// トランプ関連のソースファイル
//=======================================================================================

// ヘッダファイルの読み込み ================================================
#include <iostream>
#include "Card.h"

using namespace std;

// 定数の定義 ==============================================================
#pragma region <スート>
const int Card::SPADE = 0;
const int Card::CLUB = 1;
const int Card::DIAMOND = 2;
const int Card::HEART = 3;
#pragma endregion
#pragma region <ランク>
const int Card::RANK_A = 1;
const int Card::RANK_2 = 2;
const int Card::RANK_3 = 3;
const int Card::RANK_4 = 4;
const int Card::RANK_5 = 5;
const int Card::RANK_6 = 6;
const int Card::RANK_7 = 7;
const int Card::RANK_8 = 8;
const int Card::RANK_9 = 9;
const int Card::RANK_10 = 10;
const int Card::RANK_J = 11;
const int Card::RANK_Q = 12;
const int Card::RANK_K = 13;
#pragma endregion

enum suit
{
	スペード,
	クラブ,
	ダイヤモンド,
	ハート,
};

//================================================================
// コンストラクタ
//================================================================
Card::Card(int suit, int rank) :m_suit(suit), m_rank(rank + 1)
{
}

//================================================================
// デストラクタ
//================================================================
Card::~Card()
{
}

//================================================================
// トランプを表示する
//================================================================
void Card::ShowCard()
{
	switch (m_suit)
	{
	case スペード:     cout << "スペード     : "; break;
	case クラブ:       cout << "クラブ       : "; break;
	case ダイヤモンド: cout << "ダイヤモンド : "; break;
	case ハート:       cout << "ハート       : "; break;
	default:           cout << "エラー";          break;
	}
	cout << m_rank << endl;
}

