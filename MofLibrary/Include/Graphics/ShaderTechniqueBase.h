/*************************************************************************//*!
					
					@file	ShaderTechniqueBase.h
					@brief	�V�F�[�_�[�e�N�j�b�N���N���X�B

															@author	CDW
															@date	2014.05.14
*//**************************************************************************/

//ONCE
#ifndef		__SHADERTECHNIQUEBASE__H__

#define		__SHADERTECHNIQUEBASE__H__


//INCLUDE
#include	"ShaderTechnique.h"

namespace Mof {
	
	/*******************************//*!
	@brief	�V�F�[�_�[�e�N�j�b�N�N���X

			�V�F�[�_�[�̃e�N�j�b�N�ݒ���s�����߂̃N���X�B

	@author	CDW
	*//********************************/
	class MOFLIBRARY_API CShaderTechniqueBase : public IShaderTechnique {
	protected:
		/*******************//*!
		���O
		*//********************/
		CString						m_Name;
		/*******************//*!
		�p�X�z��
		*//********************/
		LPShaderPassArray			m_pPassArray;
	public:
		/*************************************************************************//*!
				@brief			�R���X�g���N�^
				@param			None

				@return			None
		*//**************************************************************************/
		CShaderTechniqueBase();
		/*************************************************************************//*!
				@brief			�R���X�g���N�^
				@param[in]		pName		�e�N�j�b�N��
				@param[in]		pc			�p�X�J�E���g

				@return			None
		*//**************************************************************************/
		CShaderTechniqueBase(LPCMofChar pName,const MofU32 pc);
		/*************************************************************************//*!
				@brief			�R�s�[�R���X�g���N�^
				@param[in]		pObj		�R�s�[�V�F�[�_�[

				@return			None
		*//**************************************************************************/
		CShaderTechniqueBase(const CShaderTechniqueBase& pObj);
		/*************************************************************************//*!
				@brief			�f�X�g���N�^
				@param			None

				@return			None
		*//**************************************************************************/
		virtual ~CShaderTechniqueBase();
		
		/*************************************************************************//*!
				@brief			���
				@param[in]		pData			����ǉ��f�[�^

				@return			TRUE			����I��<br>
								����ȊO		����G���[�A�G���[�R�[�h��Ԃ��B
		*//**************************************************************************/
		virtual MofBool Release(LPMofVoid pData = NULL);
		
		//----------------------------------------------------------------------------
		////Set
		//----------------------------------------------------------------------------
		/*************************************************************************//*!
				@brief			���O�ݒ�
				@param[in]		pName			�ݒ肷�閼�O
				
				@return			TRUE			����I��<br>
								����ȊO		�ݒ�G���[�A�G���[�R�[�h��Ԃ��B
		*//**************************************************************************/
		virtual MofBool SetName(LPCMofChar pName);

		//----------------------------------------------------------------------------
		////Get
		//----------------------------------------------------------------------------
		/*************************************************************************//*!
				@brief			���O�擾
				@param			None

				@return			���O�̎擾
		*//**************************************************************************/
		virtual LPString GetName(void);
		/*************************************************************************//*!
				@brief			�p�X�̐��擾
				@param			None

				@return			�p�X�̐�
		*//**************************************************************************/
		virtual MofU32 GetPassCount(void) const;
		/*************************************************************************//*!
				@brief			�p�X�̎擾
				@param[in]		n			�p�X�ԍ�

				@return			�p�X
		*//**************************************************************************/
		virtual LPShaderPass GetPass(MofU32 n);
	};

	#include	"ShaderTechniqueBase.inl"

}

#endif

//[EOF]