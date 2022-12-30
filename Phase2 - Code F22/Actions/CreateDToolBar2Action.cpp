#include "CreateDToolbar2Action.h"
#include "..\ApplicationManager.h"




CreateDToolbar2Action::CreateDToolbar2Action(ApplicationManager* pApp) :Action(pApp)
{}



void CreateDToolbar2Action::ReadActionParameters()
{}




void CreateDToolbar2Action::Execute(bool w)
{
	Output* pOut = pManager->GetOutput();
	pOut->CreateDrawToolBar();
}

bool CreateDToolbar2Action::isrecord()
{
	return true;
}