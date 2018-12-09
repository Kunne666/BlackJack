//=======================================================================================
// CardManager.h
// �J�[�h�Ǘ��֘A�̃w�b�_�[�t�@�C��
//=======================================================================================

// ���d�C���N���[�h�̖h�~
#ifndef INCLUDE_CardManagerHeader
#define INCLUDE_CardManagerHeader

#include "Card.h"
#include "Singleton.h"
#include <vector>

class CardManager:public Singleton<CardManager>
{
public:
	friend class Singleton<CardManager>; // Singleton �ł̃C���X�^���X�쐬�͋���

	// �f�[�^�����o�̐錾
private:
	std::vector<Card*> m_deck;
	Card* m_list[52];

	// �����o�֐��̐錾
private:
	// �R���X�g���N�^
	CardManager();
public:
	// �f�X�g���N�^
	~CardManager();

public:
	// ����
	void CreateDeck();
	Card* DrawCard();
	void ShowDeck();
	void ShuffleCards();

};

#endif
