//=======================================================================================
// C++����   �@�@�F�@2018/11/27
// �搶        �@�F�@����搶
// �ۑ�@�@�@�@�@�F�@�X�e�[�^�X�Q��
// �N���X�E�ԍ��@�F�@GF3�ENo.25
// ���O�@�@�@�@�@�F�@���� ��b
// ��o���@�@�@�@�F�@2018/12/10
//=======================================================================================

// �w�b�_�t�@�C���̓ǂݍ��� ================================================
#pragma region<�C���N���[�h>
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

// ���������[�N�̌��o�̏���
#if _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif

// �萔�̒�` ==============================================================

int main()
{
	// ���������[�N�̌��o
	::_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);

	// �����V�[�h�̐���
	srand(static_cast<unsigned int>(time(nullptr)));

	CardManager* m_deck = CardManager::GetInstance();
	CoinManager* m_coin = CoinManager::GetInstance();

	Player* m_player = new Player;
	Dealer* m_dealer = new Dealer;

	// �R�C�����󂯎��
	m_player->GetPlayerCoin();
	m_dealer->GetDealerCoin();

	for (;;)
	{
		// �x�b�g�z���w�肷�� ====================
		int bet = 0;

		cout << endl;
		cout << "�x�b�g�z���w��" << endl;
		cin >> bet;

		cout << bet << "���x�b�g����" << endl;
		m_player->BetPlayerCoins(bet);
		m_dealer->BetDealerCoins(bet);
		// =======================================

		// �g�����v���V���b�t������
		m_deck->ShuffleCards();

		// �J�[�h�̕\���F�m�F�p
		//m_deck->ShowDeck();

		// �����R�C���̕\��
		m_player->ShowPlayerWallet();
		m_dealer->ShowDealerWallet();

		// ��D�ւQ���J�[�h��z��
		cout << "====== �Q���J�[�h��z�� ======" << endl;
		m_player->TwoCardsAddPlayerHands();
		m_dealer->TwoCardsAddDealerHands();

		// DoubleDown�I�� ========================
		//bool doubleDown = false;

		//cout << endl;
		//cout << "DoubleDown���邩�H" << endl;
		//cout << "Yes(1) / No(0)" << endl;
		//cin >> doubleDown;

		//if (doubleDown) {}

		// =======================================

		// Stand�I��(Stay)

		// �J�[�h�̃����N�̍��v�l���P�U�ȉ��Ȃ狭���I��Hit����
		//if ()
		//{
		//	m_player->OneCardAddPlayerHands();
		//}

		// �����N�̍��v�l���Q�Q���ȏォ�H
		// �z���Ă�����R�C����v��

		// �����N�̍��v�l���Q�P�ł���
		// �������Ƀx�b�g�����R�C����n��

		// �v���C���[�̎�D�̕\��
		m_player->ShowPlayerHands();
		// �v���C���[�̎�D�J�[�h�̃����N���v�l��\��
		m_player->ShowPlayerTotalRank();

		// �f�B�[���[�̎�D�̕\���F�v���C���ɂ͂P���ڂ̃J�[�h�̂ݕ\��
		m_dealer->ShowDealerHands();
		// �f�B�[���[�̎�D�J�[�h�̃����N���v�l��\���F�v���C���ɂ͔�\���A�Q�[���̍Ō�Ƀ��U���g�Ƃ��ĕ\��
		m_dealer->ShowDealerTotalRank();

		// Hit�I�� ===============================
		bool hit = false;

		cout << endl;
		cout << "�J�[�h��ǉ��ň������H" << endl;
		cout << "Yes(1) / No(0)" << endl;
		cin >> hit;

		if (hit)
			m_player->OneCardAddPlayerHands();

		// �f�B�[���[���g���ǉ��ŃJ�[�h���������ǂ����H

		// =======================================
		// �v���C���[�̎�D�̕\��
		m_player->ShowPlayerHands();
		// �v���C���[�̎�D�J�[�h�̃����N���v�l��\��
		m_player->ShowPlayerTotalRank();

		// �f�B�[���[�̎�D�̕\���F�v���C���ɂ͂P���ڂ̃J�[�h�̂ݕ\��
		m_dealer->ShowDealerHands();
		// �f�B�[���[�̎�D�J�[�h�̃����N���v�l��\���F�v���C���ɂ͔�\���A�Q�[���̍Ō�Ƀ��U���g�Ƃ��ĕ\��
		m_dealer->ShowDealerTotalRank();

		// ====================================================
		// �Q�[�����I������ 
		// ====================================================
		bool gameContinue = true;
		cout << endl;
		cout << "�Q�[���𑱂��܂����H" << endl;
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