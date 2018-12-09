//=======================================================================================
// singleton.h
// �V���O���g���֘A�̃w�b�_�[�t�@�C��
//=======================================================================================

// ���d�C���N���[�h�̖h�~
#ifndef INCLUDE_Singleton
#define INCLUDE_Singleton

template<class T>
class Singleton
{
public:
	static inline T* GetInstance()
	{
		static T instance;
		return &instance;
	}

protected:
	Singleton() {} // �O���ł̃C���X�^���X�쐬�͋֎~
	virtual ~Singleton() {}

private:
	void operator=(const Singleton& obj) {} // ������Z�q�֎~
	Singleton(const Singleton &obj) {} // �R�s�[�R���X�g���N�^�֎~
};

#endif