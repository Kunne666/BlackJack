//=======================================================================================
// Wallet.h
// �E�H���b�g�֘A�̃w�b�_�[�t�@�C��
//=======================================================================================

// ���d�C���N���[�h�̖h�~
#ifndef INCLUDE_WalletHeader
#define INCLUDE_WalletHeader

#include "Coin.h"
#include <vector>

class Wallet
{
	//�@�f�[�^�����o�̐錾
private:
	std::vector<Coin*> m_coin;
	int m_count;

	//�@�����o�֐��̐錾
public:
	// �R���X�g���N�^
	Wallet();
	// �f�X�g���N�^
	~Wallet();

public:
	// ����
	void AddWallet(Coin* coin);
	void ShowWallet();
	void BetCoin(int &bet);

};

#endif

