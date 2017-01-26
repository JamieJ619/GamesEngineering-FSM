#include "stdafx.h"
#include "Climbing.h"

void Climbing::idle(Animation* a)
{
	std::cout << "Going from Idle to Climbing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}