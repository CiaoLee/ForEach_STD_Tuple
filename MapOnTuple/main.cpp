#include <iostream>
#include <functional>
#include  <stdlib.h>
#include "TupleIterator.h"

void TuplePrintInt(int InVar)
{
	std::cout << InVar << " ";
}

int main()
{

	std::tuple<int, int, int> IntsTuple = std::make_tuple(1, 2, 3);
	std::function<void(int)> CallFunc= TuplePrintInt;

	//Call TransformTuple
	TransformTuple(IntsTuple,CallFunc);
	std::cout << std::endl;

	int Temp;
	std::cin >> Temp;

	return 0;
}