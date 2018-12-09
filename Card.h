//=======================================================================================
// Card.h
// トランプ関連のヘッダーファイル
//=======================================================================================

// 多重インクルードの防止
#ifndef INCLUDE_CardHeader
#define INCLUDE_CardHeader

class Card
{
public:
	friend class Hand;

	//　データメンバの宣言
private:
	int m_suit;
	int m_rank;

public:
#pragma region <スート>
	static const int SPADE;
	static const int CLUB;
	static const int DIAMOND;
	static const int HEART;
#pragma endregion
#pragma region <ランク>
	static const int RANK_A;
	static const int RANK_2;
	static const int RANK_3;
	static const int RANK_4;
	static const int RANK_5;
	static const int RANK_6;
	static const int RANK_7;
	static const int RANK_8;
	static const int RANK_9;
	static const int RANK_10;
	static const int RANK_J;
	static const int RANK_Q;
	static const int RANK_K;
#pragma endregion

	//　メンバ関数の宣言
public:
	// コンストラクタ
	Card(int suit, int rank);
	// デストラクタ
	~Card() ;

public:
	// 操作
	void ShowCard();

};

#endif

