#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong amount of ARGS" << std::endl;
		return (1);
	}
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string line;
    std::ifstream file(argv[1]);
    size_t pos;

	if (s1.empty() || s2.empty() || !file.is_open())
    {
        std::cerr << "Could not open input file: " << argv[1] << std::endl;
        return(1);
    }
    std::ofstream replace(std::string(argv[1]) + ".replace");
    while (std::getline(file, line))
    {
        while ((pos = line.find(s1)) != std::string::npos)
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        replace << line << std::endl;
    }

    return 0;
}