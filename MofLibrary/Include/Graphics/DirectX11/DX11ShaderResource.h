/*************************************************************************//*!
					
					@file	DX11ShaderResourceBase.h
					@brief	DirectX11シェーダーリソースクラス。

															@author	CDW
															@date	2014.05.14
*//**************************************************************************/

//ONCE
#ifndef		__DX11SHADERRESOURCE__H__

#define		__DX11SHADERRESOURCE__H__

//INCLUDE
#include	"../ShaderResourceBase.h"

namespace Mof {
	
	/*******************************//*!
	@brief	シェーダーインターフェイス

			シェーダーへのパラメーター設定をおこなうためのリソースインターフェイス。

	@author	CDW
	*//********************************/
	class MOFLIBRARY_API CDX11ShaderResource : public CShaderResourceBase {
	protected:
		/*******************//*!
		コンスタントリソース
		*//********************/
		ID3DX11EffectShaderResourceVariable*				m_pResource;
	public:
		/*************************************************************************//*!
				@brief			コンストラクタ
				@param			None

				@return			None
		*//**************************************************************************/
		CDX11ShaderResource();
		/*************************************************************************//*!
				@brief			コピーコンストラクタ
				@param[in]		pObj		コピーシェーダー

				@return			None
		*//**************************************************************************/
		CDX11ShaderResource(const CDX11ShaderResource& pObj);
		/*************************************************************************//*!
				@brief			デストラクタ
				@param			None

				@return			None
		*//**************************************************************************/
		virtual ~CDX11ShaderResource();
		
		/*************************************************************************//*!
				@brief			リソースの生成
				@param[in]		pShader		シェーダー
				@param[in]		pName		リソース名
				
				@return			TRUE		成功<br>
								それ以外	失敗、エラーコードが戻り値となる
		*//**************************************************************************/
		virtual MofBool Create(LPShader pShader, LPCMofChar pName);
		
		/*************************************************************************//*!
				@brief			バインドの実行
				@param			None
				
				@return			TRUE		成功<br>
								それ以外	失敗、エラーコードが戻り値となる
		*//**************************************************************************/
		virtual MofBool Bind(void);

		/*************************************************************************//*!
				@brief			解放
				@param[in]		pData			解放追加データ

				@return			TRUE			正常終了<br>
								それ以外		解放エラー、エラーコードを返す。
		*//**************************************************************************/
		virtual MofBool Release(LPMofVoid pData = NULL);

		//----------------------------------------------------------------------------
		////Set
		//----------------------------------------------------------------------------

		//----------------------------------------------------------------------------
		////Get
		//----------------------------------------------------------------------------


		//クラス基本定義
		MOF_LIBRARYCLASS(CDX11ShaderResource, MOF_DX11SHADERRESOURCECLASS_ID);
	};

	#include	"DX11ShaderResource.inl"

	//置き換え
	typedef CDX11ShaderResource		CShaderResource;
}

#endif

//[EOF]