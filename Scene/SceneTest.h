#pragma once
#include "SceneBase.h"
#include <vector>

#include "ObjectPlayer.h"
#include "ObjectEnemy.h"

class SceneTest : public SceneBase
{
public:
	SceneTest();
	virtual ~SceneTest();


	virtual void init() override;
	virtual void end() override;

	virtual SceneBase* update() override;
	virtual void draw() override;

private:
	int			m_hPlayer;
	int			m_hEnemy;

	ObjectPlayer	m_player;
	std::vector<ObjectEnemy>	m_enemy;

	// ?G?̐???
	int			m_enemyInterval;
};