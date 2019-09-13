#include"Setup.h"

float GetRandom(float min, float max)
{
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(min, max);
	return dis(gen);
}
int Sign(float x) {
	if (x >= 0)
		return 1;
	else
		return -1;
}
float Map(float input, float inputMin, float inputMax, float outputMin, float outputMax){
    return outputMin + (input - inputMin) / (inputMax - inputMin) * (outputMax - outputMin);
}