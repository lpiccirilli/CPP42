#include "RPN.hpp"

int check(char *str)
{
	if (!str)
		return -1;
	while(*str)
	{
		if (!std::isdigit(*str) && *str != ' ' && *str != '+' && *str != '-' && *str != '*' && *str != '/')
			return -1;
		str++;
	}
	return 0;
}

RPN::RPN(char *str)
{
	if (check(str) == -1)
	{
		std::cerr << "Parsing Error" << std::endl;
		return ;
	}
	for (char temp = *str; temp!=0; temp=*str++)
	{
		switch(temp)
		{
			case ' ':
				break;
			case '+':
			{
				do_operation('+');
				break;
			}
			case '-':
			{
				do_operation('-');
				break;
			}
			case '*':
			{
				do_operation('*');
				break;
			}
			case '/':
			{
				do_operation('/');
				break;
			}
			default:
			{
				stack.push(temp - '0');
				break;
			}
		}
	}
	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
	else
		std::cerr << "Error" << std::endl;
}

void RPN::do_operation(char c)
{
	int b = stack.top();
	stack.pop();
	int a = stack.top();
	stack.pop();
	if (c == '+')
		stack.push(a + b);
	else if (c == '-')
		stack.push(a - b);
	else if (c == '*')
		stack.push(a * b);
	else if (c == '/')
		stack.push(a / b);
}
