//=======================================================================================
// Coin.h
// �R�C���֘A�̃w�b�_�[�t�@�C��
//=======================================================================================

// ���d�C���N���[�h�̖h�~
#ifndef INCLUDE_CoinHeader
#define INCLUDE_CoinHeader

class Coin
{
	// �f�[�^�����o�̐錾
private:
	int m_coin;

	// �����o�֐��̐錾
public:
	// �R���X�g���N�^
	Coin(int coin = 2000);
	// �f�X�g���N�^
	~Coin();

public:
	// ����
	void ShowCoin();

};

#endif
