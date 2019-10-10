/*
 * MusicPlayer.h
 *
 *  Created on: Aug 22, 2019
 *      Author: rcavalcanti
 */
#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include "MusicPlayerState.h"

class MusicPlayer;
class MusicPlayerState;

class MusicPlayer {
public:
	enum State
	{
		ST_STOPPED,
		ST_PLAYING,
		ST_PAUSED
	};

	MusicPlayer();
	virtual ~MusicPlayer();

	void Play();
	void Pause();
	void Stop();

	void SetState(State state);

private:
	MusicPlayerState * m_pState;
};

#endif // MUSICPLAYER_H
