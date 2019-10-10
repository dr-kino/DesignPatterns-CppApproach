#include <iostream>
#include "MusicPlayer.h"

using namespace std;

int main(int argc, char **argv) {

	MusicPlayer player;

	player.Play();
	player.Pause();
	player.Stop();

	return 0;
}
