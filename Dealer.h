//=======================================================================================
// Dealer.h
// �f�B�[���[�֘A�̃w�b�_�[�t�@�C��
//=======================================================================================

// ���d�C���N���[�h�̖h�~
#ifndef INCLUDE_DealerHeader
#define INCLUDE_DealerHeader

//#include "CardManager.h"
#include "Player.h"
#include "Hand.h"
#include "Wallet.h"

class Dealer
{
	//�@�f�[�^�����o�̐錾
private:
	Player* m_player;
	Hand* m_hand;
	Wallet* m_wallet;

	//�@�����o�֐��̐錾
public:
	// �R���X�g���N�^
	Dealer();
	// �f�X�g���N�^
	~Dealer();

public:
	// ����
	void OneCardAddDealerHands();
	void TwoCardsAddDealerHands();
	void ShowDealerHands();
	void ShowDealerWallet();
	void ShowDealerTotalRank();
	void GetDealerCoin();

};

#endif
