#include "Bureaucrat.hpp"

int main()
{
	// try
	// {
	// 	/* TEST 1*/
	// 	Bureaucrat Yao("Yao", -150);
	// 	Yao.DecrementGrade();
	// 	std::cout << Yao << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	/* TEST 2*/
	// 	Bureaucrat Yao("Yao", 1501);
	// 	Yao.DecrementGrade();
	// 	std::cout << Yao << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	/* TEST 3*/
	// 	Bureaucrat Yao("Yao", 150);
	// 	Yao.DecrementGrade();
	// 	std::cout << Yao << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	/* TEST 4*/
	// 	Bureaucrat Yao("Yao", 1);
	// 	Yao.IncrementGrade();
	// 	std::cout << Yao << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	try 
	{
		/* TEST 5*/
		Bureaucrat Yao("Yao", 10);
		Yao.IncrementGrade();
		std::cout << Yao << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}
