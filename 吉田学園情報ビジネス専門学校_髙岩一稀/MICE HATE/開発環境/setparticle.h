//-------------------------------------------------------------------
//
// セットパーティクルヘッダー (setparticle.h)
// Author:Itsuki Takaiwa
//
//-------------------------------------------------------------------
#ifndef _SETPARTICLE_H_
#define _SETPARTICLE_H_

#include "main.h"

//-------------------------------------------------------------------
// セットパーティクルの種類
//-------------------------------------------------------------------
typedef enum
{
	SETPARTICLE_MOVE_PLAYER = 0,	// 自機の動き
	SETPARTICLE_MOVE_ENEMY,			// 敵の動き
	SETPARTICLE_HIT_PLAYER,			// 自機が攻撃を受けたとき
	SETPARTICLE_HIT_ENEMY,			// 同色の弾が当たったとき
	SETPARTICLE_ANYHIT_ENEMY,		// 異色の弾が当たったとき
	SETPARTICLE_PLAYER_BULLET,		// 自機の弾の軌道
	SETPARTICLE_ENEMY_BULLET,		// 敵の弾の軌道
	SETPARTICLE_MAX,
}SETPARTICLE;

//-------------------------------------------------------------------
// プロトタイプ宣言
//-------------------------------------------------------------------
void SetBom(D3DXVECTOR3 pos,SETPARTICLE type);											// 爆発
void SetBulletOrbit(D3DXVECTOR3 pos,D3DXCOLOR col, SETPARTICLE type);					// 弾の軌道
void SetMoveOrbit(D3DXVECTOR3 pos, D3DXVECTOR3 move, D3DXCOLOR col, SETPARTICLE type);	// キャラクターの軌道

#endif
