#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    if (argc > 1)
	{
        for (int i = 1; i < argc; i++)
            for (int j = 0, len = strlen(argv[i]); j < len; j++)
                putchar(toupper(argv[i][j]));
        std::cout << std::endl;
	}
	else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
