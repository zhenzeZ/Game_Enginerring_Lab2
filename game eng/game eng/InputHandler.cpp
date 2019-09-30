#include "InputHandler.h"

InputHandler::InputHandler()
{
	buttonQ = new QCommand();
	buttonU = new WCommand();
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
		m_currentText += "Q";
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
	{
		//cout << "Key U is Pressed" << endl;
		buttonU->execute();
		macro->add(buttonU);
		m_currentText += "U";
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	{
		//cout << "Key E is Pressed" << endl;
		buttonE->execute();
		macro->add(buttonE);
		m_currentText += "E";
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		//cout << "Key R is Pressed" << endl;
		buttonR->execute();
		macro->add(buttonR);
		m_currentText += "R";
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
	{
		//cout << "Key T is Pressed" << endl;
		buttonT->execute();
		macro->add(buttonT);
		m_currentText += "T";
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
	{
		//cout << "Key Y is Pressed" << endl;
		buttonY->execute();
		macro->add(buttonY);
		m_currentText += "Y";
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
