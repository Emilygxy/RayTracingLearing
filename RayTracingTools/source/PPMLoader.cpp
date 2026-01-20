#include"PPMLoader.h"
#include<fstream>
namespace ppm
{
    void SavePPM(const std::string& filename, int width, int height, const std::vector<color>& data)
    {
        std::ofstream file(filename);
        if (!file.is_open()) { /* 错误处理 */ }

        file << "P3\n"; // 魔术数字
        file << width << " " << height << "\n"; // 宽度 高度
        file << 255 << "\n"; // 最大颜色值

        for (const auto& pixel : data) {
            file << int(pixel.x()) << " " << int(pixel.y()) << " " << int(pixel.z()) << "\n"; // 写入 RGB 像素值
        }
        file.close();
    }

    void LoadPPM(const std::string& filename, int& width, int& height, std::vector<color>& data)
    {
        std::ifstream file(filename);
        if (!file.is_open()) { /* 错误处理 */ }

        std::string magic;
        file >> magic;
        if (magic != "P3") { /* 错误处理: 不是PPM3 */ }

        file >> width >> height;
        int maxVal;
        file >> maxVal; // 通常是255

        data.resize(width * height);
        for (int i = 0; i < width * height; ++i) {
            file >> data[i][0] >> data[i][1] >> data[i][2]; // 顺序读取 RGB
        }
        file.close();
    }
}