#pragma once
#include "Command.h"
class InputHandler {
public:
	void handleInput();
private:
	Command* button1;
	Command* button2;
	Command* button3;
	Command* button4;
};