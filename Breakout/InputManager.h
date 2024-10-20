#pragma once

#include "Paddle.h"

class InputManager
{
public:
	InputManager(sf::RenderWindow* window, Paddle* paddle);

	void update(float dt);

	void SwapControlScheme();

	bool IsKeyboardInputActive();

private:
	void UpdateKeyboard(float dt);
	void UpdateMouse(float dt);

	sf::RenderWindow* _window;
	Paddle* _paddle;

	sf::Vector2u _windowSize;
	float movementBufferSize;

	bool bIsKeyboardInputActive;
};
