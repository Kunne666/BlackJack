//=======================================================================================
// CoinManager.h
// �R�C���Ǘ��֘A�̃w�b�_�[�t�@�C��
//=======================================================================================

// ���d�C���N���[�h�̖h�~
#ifndef INCLUDE_CoinManagerHeader
#define INCLUDE_CoinManagerHeader

#include "Coin.h"
#include "Singleton.h"
#include <vector>

class CoinManager :public Singleton<CoinManager>
{
public:
	friend class Singleton<CoinManager>; // Singleton �ł̃C���X�^���X�쐬�͋���

	// �f�[�^�����o�̐錾
private:
	std::vector<Coin*> m_coin;
	Coin* m_list[2000];

	// �����o�֐��̐錾
private:
	// �R���X�g���N�^
	CoinManager();
public:
	// �f�X�g���N�^
	~CoinManager();

public:
	// ����
	void CreateCoin();
	Coin* DistributeCoin();
	void ShowCoin();
	void DoubleDown();

};

#endif
