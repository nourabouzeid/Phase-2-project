#pragma once
#include<string>
#include "Action.h"
class SaveAction:public Action
{
private:
	string s,crntdclr,crntfclr;
	ofstream Fout;
public:
	SaveAction(ApplicationManager* pApp);
	virtual void ReadActionParameters();
	virtual void Execute();

};