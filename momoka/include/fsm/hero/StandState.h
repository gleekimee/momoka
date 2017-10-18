#pragma once
#include "fsm/HeroState.h"

class StandState : public HeroState {

public:
	explicit StandState(Hero& hero);

	~StandState() override;
	HeroState* LeftKeyDown() override;
	HeroState* RightKeyDown() override;
	HeroState* JumpKeyDown() override;
	HeroState* Onland() override;
	HeroState* Update() override;

private:
	bool m_isOnland_;
};
