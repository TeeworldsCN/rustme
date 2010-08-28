/* copyright (c) 2007 magnus auvinen, see licence.txt for more info */

#ifndef PLASMA_TYPE
#define PLASMA_TYPE

#include <game/server/entity.h>

class CGun;

class CPlasma : public CEntity
{
	vec2 m_Core;
	int m_EvalTick;
	int m_LifeTime;
	bool m_Freeze;
	bool m_Explosive;
	bool HitCharacter();
	void Move();
public:
	CPlasma(CGameWorld *pGameWorld, vec2 Pos, vec2 Dir, bool Freeze, bool Explosive);

	virtual void Reset();
	virtual void Tick();
	virtual void Snap(int snapping_client);
};


#endif
