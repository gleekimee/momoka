#pragma once
#include "game/GameState.h"
#include "map/World.h"
#include "objects/Hero.h"
#include "objects/Entity.h"
#include "map/TileSet.h"
#include <list>

class GamePlayState : public GameState {

public:
	explicit GamePlayState();

	void OnEnter() override;
	void OnExit() override;
	void Render() override;
	void Update(float dt) override;

private:
//	Hero *m_hero_;
	World* m_pWorld_;
};
