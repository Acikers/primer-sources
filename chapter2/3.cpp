/*
 * Write a C++ program that uses three user-defined functions
 * (counting main() as one) and produces the following output:
 *  Three blind mice
 *  Three blind mice
 *  See how they run
 *  See how they run
 */

#include <iostream>

inline void blind_mice()
{
	std::cout << "Three blind mice" << std::endl;
}

inline void see_run()
{
	std::cout << "See how they run" << std::endl;
}

int main()
{
	blind_mice();
	blind_mice();
	see_run();
	see_run();

	return 0;
}
