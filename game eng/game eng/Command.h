#pragma once
#include <iostream>
#include <list>
#include <vector>
//command interface
class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
	virtual void undo() = 0;
	virtual void redo() = 0;
	//virtual std::string getChar() = 0;

protected:
	Command() {}

};

class QCommand : public Command {
public:
	virtual void execute() override
	{
		std::cout << "Q";
	}
	virtual void undo() override
	{
		std::cout << "Undo Q" << std::endl;
	}
	virtual void redo() override
	{
		std::cout << "Redo Q" << std::endl;
	};
	/*virtual std::string getChar() override {
		return "Q";
	}*/
};

class UCommand : public Command {
public:
	virtual void execute() override
	{
		std::cout << "U";
	}
	virtual void undo() override
	{
		std::cout << "Undo U" << std::endl;
	}
	virtual void redo() override
	{
		std::cout << "Redo U" << std::endl;
	};
	/*virtual std::string getChar() override {
		return "U";
	}*/
};

class ECommand : public Command {
public:
	virtual void execute() override
	{
		std::cout << "E";
	}
	virtual void undo() override
	{
		std::cout << "Undo E" << std::endl;
	}
	virtual void redo() override
	{
		std::cout << "Redo E" << std::endl;
	};
	/*virtual std::string getChar() override {
		return "E";
	}*/
};

class RCommand : public Command {
public:
	virtual void execute() override
	{
		std::cout << "R";
	}
	virtual void undo() override
	{
		std::cout << "Undo R" << std::endl;
	}
	virtual void redo() override
	{
		std::cout << "Redo R" << std::endl;
	}
	/*virtual std::string getChar() override {
		return "R";
	}*/
};

class TCommand : public Command {
public:
	virtual void execute() override
	{
		std::cout << "T";
	}
	virtual void undo() override
	{
		std::cout << "Undo T" << std::endl;
	}
	virtual void redo() override
	{
		std::cout << "Redo T" << std::endl;
	};
	/*virtual std::string getChar() override {
		return "T";
	}*/
};

class YCommand : public Command {
public:
	virtual void execute() override
	{
		std::cout << "Y";
	}
	virtual void undo() override
	{
		std::cout << "Undo Y" << std::endl;

	}
	virtual void redo() override
	{
		std::cout << "Redo Y" << std::endl;
	};
	/*virtual std::string getChar() override {
		return "Y";
	}*/
};