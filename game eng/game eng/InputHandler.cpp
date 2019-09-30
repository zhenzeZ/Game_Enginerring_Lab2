#include "InputHandler.h"

InputHandler::InputHandler()
{
	buttonQ = new QCommand();
	buttonU = new UCommand();
	buttonE = new ECommand();
	buttonR = new RCommand();
	buttonT = new TCommand();
	buttonY = new YCommand();

	macro = new MacroCommand();

}

InputHandler::~InputHandler()
{
}


void InputHandler::handleInput()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
	{
		//cout << "Key Q is Pressed" << endl;
		buttonQ->execute();
		macro->add(buttonQ);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
	{
		//cout << "Key U is Pressed" << endl;
		buttonU->execute();
		macro->add(buttonU);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	{
		//cout << "Key E is Pressed" << endl;
		buttonE->execute();
		macro->add(buttonE);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		//cout << "Key R is Pressed" << endl;
		buttonR->execute();
		macro->add(buttonR);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
	{
		//cout << "Key T is Pressed" << endl;
		buttonT->execute();
		macro->add(buttonT);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
	{
		//cout << "Key Y is Pressed" << endl;
		buttonY->execute();
		macro->add(buttonY);
	}
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
	{
		macro->undo();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tab))
	{
		macro->redo();
	}
}
