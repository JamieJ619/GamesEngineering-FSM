#include "stdafx.h"
#include "Idle.h"
#include "Jump.h"
#include "Climbing.h"

void Idle::jumping(Animation* a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(Animation* a)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Idle::idle(Animation* a)
{
	std::cout << "Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

