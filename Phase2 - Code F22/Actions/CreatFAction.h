#pragma once
#include "Action.h"
class CreatFAction : public Action
{
private:
public:
	CreatFAction(ApplicationManager* pApp);
	virtual void ReadActionParameters();
	virtual bool Execute(bool w = true);
	bool isrecord();
	virtual void undo();
	virtual void redo();
};

