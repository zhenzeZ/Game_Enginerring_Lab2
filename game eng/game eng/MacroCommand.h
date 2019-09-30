#pragma once
#include "Command.h"


class MacroCommand : public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command* c);
	virtual void remove(Command* c);
	virtual void execute();
	virtual void undo();
	virtual void redo();
	//virtual std::string getChar();

private:
	std::list<Command*> commands;
	std::list<Command*> redoCommands;
	std::list<Command*> emptyCommands;
	std::string m_currentText = "";
};