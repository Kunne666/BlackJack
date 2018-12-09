//=======================================================================================
// Card.h
// �g�����v�֘A�̃w�b�_�[�t�@�C��
//=======================================================================================

// ���d�C���N���[�h�̖h�~
#ifndef INCLUDE_CardHeader
#define INCLUDE_CardHeader

class Card
{
public:
	friend class Hand;

	//�@�f�[�^�����o�̐錾
private:
	int m_suit;
	int m_rank;

public:
#pragma region <�X�[�g>
	static const int SPADE;
	static const int CLUB;
	static const int DIAMOND;
	static const int HEART;
#pragma endregion
#pragma region <�����N>
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

	//�@�����o�֐��̐錾
public:
	// �R���X�g���N�^
	Card(int suit, int rank);
	// �f�X�g���N�^
	~Card() ;

public:
	// ����
	void ShowCard();

};

#endif

