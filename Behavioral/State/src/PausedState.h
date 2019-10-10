/*
 * PausedState.h
 *
 *  Created on: Aug 22, 2019
 *      Author: rcavalcanti
 */
#ifndef PAUSEDSTATE_H
#define PAUSEDSTATE_H

#include "MusicPlayer.h"
#include "MusicPlayerState.h"

class PausedState : public MusicPlayerState {
public:
	PausedState();
	virtual ~PausedState();

	virtual void Play(MusicPlayer * player);
	virtual void Stop(MusicPlayer * player);
};

#endif // PAUSEDSTATE_H
