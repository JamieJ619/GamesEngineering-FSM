// FiniteStateMachine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Animation.h"
#include "iostream"
#include <thread>
#include <chrono>

int main() {
	Animation fsm; int i = 0;
	while (true) {
		if (i == 0) {
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 1;
		}
		else {
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 0;
		}
	}
}


