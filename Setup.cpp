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
float Map(float x, float min1, float max1, float min2, float max2){
	return (x-min1)*(max2 - min2)/(max1 - min1) + min2;
}