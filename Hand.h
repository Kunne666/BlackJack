//=======================================================================================
// Hand.h
// �g�����v�֘A�̃w�b�_�[�t�@�C��
//=======================================================================================

// ���d�C���N���[�h�̖h�~
#ifndef INCLUDE_HandHeader
#define INCLUDE_HandHeader

#include "Card.h"

class Hand
{
	//�@�f�[�^�����o�̐錾
private:
	Card* m_card[11];
	int m_count;
	int m_rankCount;

	//�@�����o�֐��̐錾
public:
	// �R���X�g���N�^
	Hand();
	// �f�X�g���N�^
	~Hand();

public:
	// ����
	void AddHand(Card* card);
	void ShowHand();
	void ShowDealerHand();
	void TotalRankInHands();
	int Judge();

};

#endif