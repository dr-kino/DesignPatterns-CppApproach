/*
 * StoppedState.h
 *
 *  Created on: Aug 22, 2019
 *      Author: rcavalcanti
 */
#ifndef STOPPEDSTATE_H
#define STOPPEDSTATE_H

#include "MusicPlayer.h"
#include "MusicPlayerState.h"

class StoppedState : public MusicPlayerState {
public:
	StoppedState();
	virtual ~StoppedState();

	virtual void Play(MusicPlayer * player);
};

#endif // STOPPEDSTATE_H
