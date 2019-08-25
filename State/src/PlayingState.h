/*
 * PlayingState.h
 *
 *  Created on: Aug 22, 2019
 *      Author: rcavalcanti
 */
#ifndef PLAYINGSTATE_H
#define PLAYINGSTATE_H

#include "MusicPlayer.h"
#include "MusicPlayerState.h"

class PlayingState : public MusicPlayerState {
public:
	PlayingState();
	virtual ~PlayingState();

	virtual void Pause(MusicPlayer * player);
	virtual void Stop(MusicPlayer * player);
};

#endif // PLAYINGSTATE_H
