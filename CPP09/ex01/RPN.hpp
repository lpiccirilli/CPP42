#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
	public:
		RPN(char *str);
		std::stack<int> stack;
		void do_operation(char c);

};

#endif
