/*
 * MusicPlayerState.cpp
 *
 *  Created on: Aug 22, 2019
 *      Author: rcavalcanti
 */
#include "MusicPlayerState.h"

MusicPlayerState::MusicPlayerState(std::string name)
: m_name(name) {

}

MusicPlayerState::~MusicPlayerState() {
}

void MusicPlayerState::Play(MusicPlayer *)
{
	std::cout << "Illegal state transition from " << GetName() << " to Playing\n";
}


void MusicPlayerState::Pause(MusicPlayer *)
{
	std::cout << "Illegal state transition from " << GetName() << " to Paused\n";
}

void MusicPlayerState::Stop(MusicPlayer *)
{
	std::cout << "Illegal state transition from " << GetName() << " to Stopped\n";
}
