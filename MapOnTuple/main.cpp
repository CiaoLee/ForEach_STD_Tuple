#include <iostream>
#include <functional>
#include  <stdlib.h>
#include "TupleIterator.h"

void TuplePrintInt(int InVar)
{
	std::cout << InVar << " ";
}


int TuplePrintInt4(int var1, int var2, int var3, int param1)
{
	std::cout << var1 << " " << var2 << " " << var3 << " " << param1 << " ";
	return 4;
}

int main()
{

	std::tuple<int, int, int> IntsTuple = std::make_tuple(1, 2, 3);
	std::function<void(int)> CallFunc= TuplePrintInt;

	//Call TransformTuple
	TransformTuple(IntsTuple, CallFunc);
	std::cout << std::endl;

	std::function<int(int, int, int, int)> CallFunc2 = TuplePrintInt4;
	std::cout<<ApplyTupleToFunc(IntsTuple, CallFunc2, 1)<<" ";

	int Temp;
	std::cin >> Temp;

	return 0;
}