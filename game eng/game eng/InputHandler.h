#pragma once
#include "Command.h"
#include "MacroCommand.h"

#include <SFML/Graphics.hpp>

using namespace std;

class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	//method to bind commands
	void handleInput();

	sf::String getText() { return m_currentText; }
private:
	Command* buttonQ;
	Command* buttonU;
	Command* buttonE;
	Command* buttonR;
	Command* buttonT;
	Command* buttonY;

	MacroCommand * macro;
	std::vector<Command*> commands;

	sf::String m_currentText = "";
};

