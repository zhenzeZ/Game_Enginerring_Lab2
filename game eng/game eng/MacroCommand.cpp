#include "MacroCommand.h"

MacroCommand::MacroCommand()
{

}

MacroCommand::~MacroCommand()
{
	std::cout << "deconstructing" << std::endl;
}

void MacroCommand::add(Command*c)
{
	commands.push_back(c);
	redoCommands.clear();
}

void MacroCommand::remove(Command*c)
{
	commands.remove(c);
}
void MacroCommand::execute()
{
	std::list<Command*>::iterator iter;

	for (iter = commands.begin(); iter != commands.end(); ++iter)
	{
		(*iter)->execute();
	}
}

void MacroCommand::undo()
{
	if (commands.size() > 0) {
		(*commands.rbegin())->undo();
		redoCommands.push_back(*commands.rbegin());
		commands.pop_back();
	}

}

void MacroCommand::redo()
{
	if (redoCommands.size() > 0) {
		(*redoCommands.rbegin())->redo();
		commands.push_back(*redoCommands.rbegin());
		redoCommands.pop_back();
	}

}