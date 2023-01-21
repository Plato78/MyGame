#pragma once
#include "BRICK.h"
#include "settings.h"
struct BrickRow {
	Brick arr[10];
	int size;
};
void RowInit(Brick& brick) {
	brick.shape.setSize(sf::Vector2f(brick_width, brick_height));
	brick.shape.setFillColor(brickColor);

}
