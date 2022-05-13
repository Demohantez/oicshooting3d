/*************************************************************************//*!
					
					@file	DirectInput.h
					@brief	DirectInput�ł̊e����͂̏������s���N���X�B

															@author	CDW
															@date	2014.05.14
*//**************************************************************************/

//ONCE
#ifndef		__DIRECTINPUT__H__

#define		__DIRECTINPUT__H__

//INCLUDE
#include	"../Input.h"

namespace Mof {
	
	/*******************************//*!
	@brief	�C���v�b�g�������\����

			�C���v�b�g�����ɕK�v�ȏ����܂Ƃ߂��\����

	@author	CDW
	*//********************************/
	typedef struct tag_DIRECTINPUTCREATEINFO : public tag_INPUTCREATEINFO {
		LPWindow				pWindow;					//!<�E�C���h�E

		/*************************************************************************//*!
				@brief			�R���X�g���N�^
				@param			None

				@return			None
		*//**************************************************************************/
		tag_DIRECTINPUTCREATEINFO() :
		tag_INPUTCREATEINFO() ,
		pWindow(NULL) {
			Size = sizeof(tag_DIRECTINPUTCREATEINFO);
		}
	}DIRECTINPUTCREATEINFO,*LPDIRECTINPUTCREATEINFO;
	
	/*******************************//*!
	@brief	�Q�[���p�b�h�񋓏��\����

			�Q�[���p�b�h�̗񋓂ɕK�v�ȏ����܂Ƃ߂��\����

	@author	CDW
	*//********************************/
	typedef struct tag_GAMEPADENUMINFO {
		LPWindow				pWindow;					//!<�E�C���h�E
		MofInputDevice			pInput;						//!<����
		LPGamePadArray			pPadArray;					//!<�p�b�h��

		/*************************************************************************//*!
				@brief			�R���X�g���N�^
				@param			None

				@return			None
		*//**************************************************************************/
		tag_GAMEPADENUMINFO() :
		pWindow(NULL) ,
		pInput(NULL) ,
		pPadArray(NULL) {
		}
	}GAMEPADENUMINFO,*LPGAMEPADENUMINFO;
	
	/*******************************//*!
	@brief	DirectInput�N���X

			DirectInput�N���X�B

	@author	CDW
	*//********************************/
	class MOFLIBRARY_API CDirectInput : public IInput {
	protected:
		/*******************//*!
		�E�C���h�E
		*//********************/
		LPWindow					m_pWindow;
		/*******************//*!
		DirectInput�I�u�W�F�N�g
		*//********************/
		LPDIRECTINPUT8				m_pInput;
		/*******************//*!
		�L�[�{�[�h
		*//********************/
		LPDIRECTINPUTDEVICE8		m_pKeyboard;
		/*******************//*!
		�L�[�{�[�h���
		*//********************/
		MofU8						m_bKeyboardState[MOFINPUT_KEYBOARDKEYMAX];
		/*******************//*!
		���O�̃L�[�{�[�h���
		*//********************/
		MofU8						m_bPrevKeyboardState[MOFINPUT_KEYBOARDKEYMAX];
		/*******************//*!
		�}�E�X
		*//********************/
		LPDIRECTINPUTDEVICE8		m_pMouse;
		/*******************//*!
		�}�E�X���
		*//********************/
		DIMOUSESTATE2				m_MouseState;
		/*******************//*!
		���O�̃}�E�X���
		*//********************/
		DIMOUSESTATE2				m_PrevMouseState;
		/*******************//*!
		�Q�[���p�b�h�z��
		*//********************/
		LPGamePadArray				m_pGamePadArray;
		/*******************//*!
		�^�b�`���
		*//********************/
		MOFTOUCHSTATE				m_Touch[MOF_TOUCHMAX];
		/*******************//*!
		�^�b�`���
		*//********************/
		MOFTOUCHSTATE				m_PrevTouch[MOF_TOUCHMAX];

		/*************************************************************************//*!
				@brief			�����Q�[���p�b�h��
				@param[in]		DIDInst			�f�o�C�X�C���X�^���X���
				@param[in]		Context			�Q�[���p�b�h�������ւ̎Q��
				
				@return			TRUE			����I��<br>
								����ȊO		����G���[�A�G���[�R�[�h��Ԃ��B
		*//**************************************************************************/
		static MofBool CALLBACK EnumJoysticksCallback(const DIDEVICEINSTANCE* DIDInst,LPMofVoid Context);
	public:
		/*************************************************************************//*!
				@brief			�R���X�g���N�^
				@param			None

				@return			None
		*//**************************************************************************/
		CDirectInput();
		/*************************************************************************//*!
				@brief			�f�X�g���N�^
				@param			None

				@return			None
		*//**************************************************************************/
		virtual ~CDirectInput();

		/*************************************************************************//*!
				@brief			�C���v�b�g�I�u�W�F�N�g�̐���
				@param[in]		pInfo		�C���v�b�g�̐������
				
				@return			TRUE		����<br>
								����ȊO	���s�A�G���[�R�[�h���߂�l�ƂȂ�
		*//**************************************************************************/
		virtual MofBool Create(LPINPUTCREATEINFO pInfo);
		
		/*************************************************************************//*!
				@brief			���̓L�[�X�V
				@param			None

				@return			TRUE			����I��<br>
								����ȊO		����G���[�A�G���[�R�[�h��Ԃ��B
		*//**************************************************************************/
		virtual MofBool RefreshKey(void);

		/*************************************************************************//*!
				@brief			���
				@param[in]		pData			����ǉ��f�[�^

				@return			TRUE			����I��<br>
								����ȊO		����G���[�A�G���[�R�[�h��Ԃ��B
		*//**************************************************************************/
		virtual MofBool Release(LPMofVoid pData = NULL);
		
		/*************************************************************************//*!
				@brief			�L�[�{�[�h�L�[���͏�Ԕ���<br>
								�L�[�ԍ��̃L�[��Push(���̃t���[���œ��͂��ꂽ)������s��
				@param[in]		n				�L�[�ԍ�

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsKeyPush(const MofU8 n);
		/*************************************************************************//*!
				@brief			�L�[�{�[�h�L�[���͏�Ԕ���<br>
								�L�[�ԍ��̃L�[��Hold(���̃t���[���œ��͂���Ă���)������s��
				@param[in]		n				�L�[�ԍ�

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsKeyHold(const MofU8 n);
		/*************************************************************************//*!
				@brief			�L�[�{�[�h�L�[���͏�Ԕ���<br>
								�L�[�ԍ��̃L�[��Pull(���̃t���[���ŕ����ꂽ)������s��
				@param[in]		n				�L�[�ԍ�

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsKeyPull(const MofU8 n);

		/*************************************************************************//*!
				@brief			�}�E�X�{�^�����͏�Ԕ���<br>
								�{�^���ԍ��̃{�^����Push(���̃t���[���œ��͂��ꂽ)������s��
				@param[in]		n				�{�^���ԍ�

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsMouseKeyPush(const MofU8 n);
		/*************************************************************************//*!
				@brief			�}�E�X�{�^�����͏�Ԕ���<br>
								�{�^���ԍ��̃{�^����Hold(���̃t���[���œ��͂���Ă���)������s��
				@param[in]		n				�{�^���ԍ�

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsMouseKeyHold(const MofU8 n);
		/*************************************************************************//*!
				@brief			�}�E�X�{�^�����͏�Ԕ���<br>
								�{�^���ԍ��̃{�^����Pull(���̃t���[���ŕ����ꂽ)������s��
				@param[in]		n				�{�^���ԍ�

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsMouseKeyPull(const MofU8 n);

		/*************************************************************************//*!
				@brief			�^�b�`���͏�Ԕ���<br>
								�^�b�`�ԍ��̃^�b�`��Push(���̃t���[���œ��͂��ꂽ)������s��
				@param[in]		n				�^�b�`�ԍ�

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsTouchPush(MofU32 n);
		/*************************************************************************//*!
				@brief			�^�b�`���͏�Ԕ���<br>
								�^�b�`ID�̃^�b�`��Push(���̃t���[���œ��͂��ꂽ)������s��
				@param[in]		Id				�^�b�`ID

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsTouchPushById(MofS32 Id);
		/*************************************************************************//*!
				@brief			�^�b�`���͏�Ԕ���<br>
								�^�b�`�ԍ��̃^�b�`��Hold(���̃t���[���œ��͂���Ă���)������s��
				@param[in]		n				�^�b�`�ԍ�

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsTouchHold(MofU32 n);
		/*************************************************************************//*!
				@brief			�^�b�`���͏�Ԕ���<br>
								�^�b�`ID�̃^�b�`��Hold(���̃t���[���œ��͂���Ă���)������s��
				@param[in]		Id				�^�b�`ID

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsTouchHoldById(MofS32 Id);
		/*************************************************************************//*!
				@brief			�^�b�`���͏�Ԕ���<br>
								�^�b�`�ԍ��̃^�b�`��Pull(���̃t���[���ŕ����ꂽ)������s��
				@param[in]		n				�^�b�`�ԍ�

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsTouchPull(MofU32 n);
		/*************************************************************************//*!
				@brief			�^�b�`���͏�Ԕ���<br>
								�^�b�`ID�̃^�b�`��Pull(���̃t���[���ŕ����ꂽ)������s��
				@param[in]		Id				�^�b�`ID

				@return			TRUE			���͂���<br>
								FALSE			���͂Ȃ�
		*//**************************************************************************/
		virtual MofBool IsTouchPullById(MofS32 Id);
		
		//----------------------------------------------------------------------------
		////Set
		//----------------------------------------------------------------------------
		/*************************************************************************//*!
				@brief			�L�[��Ԑݒ�
				@param[in]		n				�L�[�ԍ�
				@param[in]		bState			�L�[���
				
				@return			TRUE			�ݒ萬��<br>
								FALSE			�ݒ莸�s
		*//**************************************************************************/
		virtual MofBool SetKeyState(const MofU8 n,const MofBool bState);
		/*************************************************************************//*!
				@brief			�L�[��Ԑݒ�
				@param[in]		n				�L�[�ԍ�
				@param[in]		bState			�L�[���
				
				@return			TRUE			�ݒ萬��<br>
								FALSE			�ݒ莸�s
		*//**************************************************************************/
		virtual MofBool SetMouseState(const MofU8 n,const MofBool bState);
		/*************************************************************************//*!
				@brief			�z�C�[����Ԑݒ�
				@param[in]		w				�z�C�[�����
				
				@return			TRUE			�ݒ萬��<br>
								FALSE			�ݒ莸�s
		*//**************************************************************************/
		virtual MofBool SetMouseWheel(const MofFloat w);
		/*************************************************************************//*!
				@brief			�^�b�`���ݒ�<br>
								�^�b�`���͂��L���ȏꍇ�̂ݏ��������s�B
				@param[in]		act				�^�b�`����t���O
				@param[in]		Id				�^�b�`ID
				@param[in]		x				�^�b�`X���W
				@param[in]		y				�^�b�`Y���W
				
				@return			TRUE			�ݒ萬��<br>
								FALSE			�ݒ莸�s
		*//**************************************************************************/
		virtual MofBool SetTouchState(MofS32 act,MofS32 Id,MofFloat x,MofFloat y);

		//----------------------------------------------------------------------------
		////Get
		//----------------------------------------------------------------------------
		/*************************************************************************//*!
				@brief			�C���v�b�g�f�o�C�X�擾<br>
								�g�p���Ȃ����ŌĂяo�����ꍇNULL��Ԃ��B
				@param			None

				@return			�C���v�b�g�f�o�C�X
		*//**************************************************************************/
		virtual MofInputDevice GetDevice(void);
		/*************************************************************************//*!
				@brief			�}�E�X���W����float�^�̃f�[�^�Ƃ��Ď擾����
				@param[out]		px			�}�E�X�w���W
				@param[out]		py			�}�E�X�x���W
				
				@return			TRUE		����Ɏ擾���邱�Ƃ��ł���
								FALSE		�ǂݍ��݃G���[
		*//**************************************************************************/
		virtual MofBool GetMousePos(MofFloat& px,MofFloat& py);
		/*************************************************************************//*!
				@brief			�}�E�X���W��Vector2�^�̃f�[�^�Ƃ��Ď擾����
				@param[out]		v			Vector2
				
				@return			TRUE		����Ɏ擾���邱�Ƃ��ł���
								FALSE		�ǂݍ��݃G���[
		*//**************************************************************************/
		virtual MofBool GetMousePos(Vector2& v);
		/*************************************************************************//*!
				@brief			�}�E�X�̃z�C�[���ړ����擾����
				@param			None
				
				@return			�z�C�[���ړ���
		*//**************************************************************************/
		virtual MofFloat GetMouseWheelMove(void);
		/*************************************************************************//*!
				@brief			�}�E�X�ړ�����float�^�̃f�[�^�Ƃ��Ď擾����
				@param[out]		px			�}�E�X�w�ړ���
				@param[out]		py			�}�E�X�x�ړ���
				
				@return			TRUE		����Ɏ擾���邱�Ƃ��ł���
								FALSE		�ǂݍ��݃G���[
		*//**************************************************************************/
		virtual MofBool GetMouseMove(MofFloat& px,MofFloat& py);
		/*************************************************************************//*!
				@brief			�}�E�X�ړ���Vector3�^�̃f�[�^�Ƃ��Ď擾����<br>
								x,y�ɂ̓J�[�\���̈ړ��ʂ�z�ɂ̓z�C�[���̈ړ��ʂ�����
				@param[out]		v			Vector3
				
				@return			TRUE		����Ɏ擾���邱�Ƃ��ł���
								FALSE		�ǂݍ��݃G���[
		*//**************************************************************************/
		virtual MofBool GetMouseMove(Vector3& v);
		/*************************************************************************//*!
				@brief			�Q�[���p�b�h�ڑ����擾
				@param			None

				@return			�Q�[���p�b�h�ڑ���
		*//**************************************************************************/
		virtual MofU32 GetGamePadCount(void);
		/*************************************************************************//*!
				@brief			�Q�[���p�b�h�擾
				@param			None

				@return			�Q�[���p�b�h
		*//**************************************************************************/
		virtual LPGamePadArray GetGamePad(void);
		/*************************************************************************//*!
				@brief			�Q�[���p�b�h�擾<br>
								�ԍ��ɐڑ�����Ă���p�b�h���擾����B<br>
								���݂̐ڑ����ȏ�̒l���w�肵���ꍇNULL��Ԃ�
				@param[in]		n			�p�b�h�ԍ�

				@return			�Q�[���p�b�h
		*//**************************************************************************/
		virtual LPGamePad GetGamePad(MofU32 n);
		
		/*************************************************************************//*!
				@brief			�^�b�`�F���ő吔�擾
				@param			None

				@return			�^�b�`�F���ő吔
		*//**************************************************************************/
		virtual MofU32 GetTouchMax();
		/*************************************************************************//*!
				@brief			�^�b�`��Ԏ擾
								�^�b�`����ĂȂ����NULL��Ԃ�
				@param[in]		n			�^�b�`�ԍ�

				@return			�^�b�`���
		*//**************************************************************************/
		virtual LPCMOFTOUCHSTATE GetTouchState(MofU32 n);
		/*************************************************************************//*!
				@brief			ID���g���ă^�b�`��Ԏ擾
								�^�b�`����ĂȂ����NULL��Ԃ�
				@param[in]		Id			�^�b�`ID

				@return			�^�b�`���
		*//**************************************************************************/
		virtual LPCMOFTOUCHSTATE GetTouchStateById(MofS32 Id);
		/*************************************************************************//*!
				@brief			���O�̃^�b�`��Ԏ擾
								�^�b�`����ĂȂ����NULL��Ԃ�
				@param[in]		n			�^�b�`�ԍ�

				@return			���O�̃^�b�`���
		*//**************************************************************************/
		virtual LPCMOFTOUCHSTATE GetPrevTouchState(MofU32 n);
		/*************************************************************************//*!
				@brief			ID���g���Ē��O�̃^�b�`��Ԏ擾
								�^�b�`����ĂȂ����NULL��Ԃ�
				@param[in]		Id			�^�b�`ID

				@return			���O�̃^�b�`���
		*//**************************************************************************/
		virtual LPCMOFTOUCHSTATE GetPrevTouchStateById(MofS32 Id);
		/*************************************************************************//*!
				@brief			�^�b�`�ړ�����float�^�̃f�[�^�Ƃ��Ď擾����
				@param[in]		n			�^�b�`�ԍ�
				@param[out]		px			�^�b�`�w�ړ���
				@param[out]		py			�^�b�`�x�ړ���

				@return			TRUE		����Ɏ擾���邱�Ƃ��ł���
								FALSE		�ǂݍ��݃G���[
		*//**************************************************************************/
		virtual MofBool GetTouchMove(MofU32 n,MofFloat& px,MofFloat& py);
		/*************************************************************************//*!
				@brief			�^�b�`�ړ�����float�^�̃f�[�^�Ƃ��Ď擾����
				@param[in]		Id			�^�b�`ID
				@param[out]		px			�^�b�`�w�ړ���
				@param[out]		py			�^�b�`�x�ړ���

				@return			TRUE		����Ɏ擾���邱�Ƃ��ł���
								FALSE		�ǂݍ��݃G���[
		*//**************************************************************************/
		virtual MofBool GetTouchMoveById(MofS32 Id,MofFloat& px,MofFloat& py);

		//�N���X��{��`
		MOF_LIBRARYCLASS_NOTCOPY(CDirectInput,MOF_DXINPUTCLASS_ID);
	};
	
	#include	"DirectInput.inl"
}

#endif

//[EOF]