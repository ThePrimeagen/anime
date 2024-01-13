#include <iostream>
#include <filesystem>
#include <vector>
#include <random>
#include <cstdlib>

namespace fs = std::filesystem;

fs::path root = std::filesystem::canonical("/proc/self/exe").parent_path().parent_path();

std::string extensions[] = {
	".png",
	".jpg",
	".jpeg",
};

void setBg(std::string filePath) 
{	
	std::string command = "feh --bg-fill " + std::string(filePath);
  std::system(command.c_str());
}

int main()
{
	bool fileChosen = false;

	while (!fileChosen)
	{
		std::vector<fs::path> files;
    for (const auto& entry : fs::directory_iterator(root)) {
        if (fs::is_regular_file(entry.path())) {
            files.push_back(entry.path());
        }
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<size_t> dist(0, files.size() - 1);
    size_t randomIndex = dist(gen);

		bool validExtension = false;
		for (std::string e : extensions)
		{
			if (files[randomIndex].extension().string() == e)
			{
				validExtension = true;
			}
		}

		if (!validExtension) { continue; }

		setBg(files[randomIndex].string());
		break;
	}

	return 0;
}
