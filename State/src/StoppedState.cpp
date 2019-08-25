/*
 * StoppedState.cpp
 *
 *  Created on: Aug 22, 2019
 *      Author: rcavalcanti
 */
#include "StoppedState.h"

StoppedState::StoppedState()
: MusicPlayerState(std::string("Stopped")) {
}

StoppedState::~StoppedState() {
}

void StoppedState::Play(MusicPlayer * player)
{
	player->SetState(MusicPlayer::ST_PLAYING);
}
