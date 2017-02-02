#include "stdafx.h"
#include "Jump.h"
#include "Idle.h"
#include "Climbing.h"


void Jumping::idle(Animation* a)
{
	std::cout << "Going from Jumping to Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
