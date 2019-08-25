cmake_minimum_required (VERSION 2.6)

project (State)

add_executable(State src/State.cpp 
			src/MusicPlayer.cpp
			src/MusicPlayerState.cpp
			src/PausedState.cpp
			src/PlayingState.cpp
			src/StoppedState.cpp)
