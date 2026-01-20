#pragma once
#include<string>
#include<vector>
#include"color.h"
namespace ppm
{
	void LoadPPM(const std::string& filename, int& width, int& height, std::vector<color>& data);
	void SavePPM(const std::string& filename, int width, int height, const std::vector<color>& data);
}