#include <iostream>
#include "10430.h"

void baekjoon_10430()
{
	std::cout << "10430�� �����Դϴ�" << std::endl;
	int A, B,C;
	std::cin >> A >> B>>C;
	std::cout << (A + B) % C << std::endl;
	std::cout << ((A % C) + (B % C)) % C << std::endl;
	std::cout << (A*B) % C << std::endl;
	std::cout << ((A % C) *(B % C)) % C << std::endl;

}