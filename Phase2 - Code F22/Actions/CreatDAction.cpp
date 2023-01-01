#include "CreatDAction.h"
#include "..\ApplicationManager.h"




CreatDAction::CreatDAction(ApplicationManager* pApp) :Action(pApp)
{
	pManager->setisundo(false);
	pManager->setisredo(false);
}



void CreatDAction::ReadActionParameters()
{}




bool CreatDAction::Execute(bool w)
{
	Output* pOut = pManager->GetOutput();
	pOut->CreateDrawColorToolBar();
	return false;
}

bool CreatDAction::isrecord()
{
	return true;
}
void CreatDAction::undo()
{
}
void CreatDAction::redo()
{
}
