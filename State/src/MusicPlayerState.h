/*
 * MusicPlayerState.h
 *
 *  Created on: Aug 22, 2019
 *      Author: rcavalcanti
 */
#ifndef MUSICPLAYERSTATE_H
#define MUSICPLAYERSTATE_H

#include <iostream>
#include <string>
#include "MusicPlayer.h"

class MusicPlayer;

class MusicPlayerState {
public:
	MusicPlayerState(std::string name);
	virtual ~MusicPlayerState();

	virtual void Play(MusicPlayer * player);
	virtual void Pause(MusicPlayer * player);
	virtual void Stop(MusicPlayer * player);

	std::string GetName() { return m_name; }

private:
	std::string   m_name;
};

#endif // MUSICPLAYERSTATE_H
