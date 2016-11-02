#pragma once
static const int MIN_SPEED = 0;
static const int MAX_SPEED = 150;

enum class Direction
{
	BACK,
	FORW,
	STAND;
};
enum class Gear
{
	NEUTRAL_GEAR,
	FIRST_GEAR,
	SECOND_GEAR,
	THIRD_GEAR,
	FOURTH_GEAR,
	FIFTH_GEAR,
	REVERSE_GEAR;
};