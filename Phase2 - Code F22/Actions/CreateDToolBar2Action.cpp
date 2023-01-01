#include "CreateDToolbar2Action.h"
#include "..\ApplicationManager.h"




CreateDToolbar2Action::CreateDToolbar2Action(ApplicationManager* pApp) :Action(pApp)
{
	pManager->setisundo(false);
	pManager->setisredo(false);
}



void CreateDToolbar2Action::ReadActionParameters()
{}




bool CreateDToolbar2Action::Execute(bool w)
{
	Output* pOut = pManager->GetOutput();
	pOut->CreateDrawToolBar();
	return true;
}

bool CreateDToolbar2Action::isrecord()
{
	return true;
}
void CreateDToolbar2Action::undo()
{
}
void CreateDToolbar2Action::redo()
{
}