//=======================================================================================
// Card.cpp
// �g�����v�֘A�̃\�[�X�t�@�C��
//=======================================================================================

// �w�b�_�t�@�C���̓ǂݍ��� ================================================
#include <iostream>
#include "Card.h"

using namespace std;

// �萔�̒�` ==============================================================
#pragma region <�X�[�g>
const int Card::SPADE = 0;
const int Card::CLUB = 1;
const int Card::DIAMOND = 2;
const int Card::HEART = 3;
#pragma endregion
#pragma region <�����N>
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
	�X�y�[�h,
	�N���u,
	�_�C�������h,
	�n�[�g,
};

//================================================================
// �R���X�g���N�^
//================================================================
Card::Card(int suit, int rank) :m_suit(suit), m_rank(rank + 1)
{
}

//================================================================
// �f�X�g���N�^
//================================================================
Card::~Card()
{
}

//================================================================
// �g�����v��\������
//================================================================
void Card::ShowCard()
{
	switch (m_suit)
	{
	case �X�y�[�h:     cout << "�X�y�[�h     : "; break;
	case �N���u:       cout << "�N���u       : "; break;
	case �_�C�������h: cout << "�_�C�������h : "; break;
	case �n�[�g:       cout << "�n�[�g       : "; break;
	default:           cout << "�G���[";          break;
	}
	cout << m_rank << endl;
}

