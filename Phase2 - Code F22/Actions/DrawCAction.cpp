#include "DrawCAction.h"
#include "..\ApplicationManager.h"

#include "..\GUI\input.h"
#include "..\GUI\Output.h"

DrawCAction::DrawCAction(ApplicationManager* pApp) :Action(pApp)
{}


void DrawCAction::ReadActionParameters()
{
	c = pManager->getcolor();
	cf1=pManager->getselectedfigure();
	oldc=cf1->getGfxInfo().DrawClr;
}

void DrawCAction::Execute(bool w)
{
	if(w)
	ReadActionParameters();
	if(cf1)
	cf1->ChngDrawClr(c);
}

bool DrawCAction::isrecord()
{
	return true;
}
void DrawCAction::undo()
{
	cf1->ChngDrawClr(oldc);
}
void DrawCAction::redo()
{
	cf1->ChngDrawClr(c);
}