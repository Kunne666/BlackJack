//=======================================================================================
// Player.h
// �g�����v�֘A�̃w�b�_�[�t�@�C��
//=======================================================================================

// ���d�C���N���[�h�̖h�~
#ifndef INCLUDE_PlayerHeader
#define INCLUDE_PlayerHeader

#include "Hand.h"
#include "Wallet.h"

class Player
{
	//�@�f�[�^�����o�̐錾
private:
	Hand* m_hand;
	Wallet* m_wallet;

	//�@�����o�֐��̐錾
public:
	// �R���X�g���N�^
	Player();
	// �f�X�g���N�^
	~Player();

public:
	// ����
	void OneCardAddPlayerHands();
	void TwoCardsAddPlayerHands();
	void ShowPlayerHands();
	void ShowPlayerWallet();
	void ShowPlayerTotalRank();
	void GetPlayerCoin();
	void BetCoins(int bet);

};

#endif

