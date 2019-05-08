#pragma once

#include <tuple>
#include <type_traits>
#include  <utility>
//Transform tuple with recursion.

template<std::size_t Index=0,typename FuncType,typename... VarTypes>
inline typename std::enable_if<Index == sizeof...(VarTypes),void>::type
TransformTuple(std::tuple<VarTypes...>& InTuple, FuncType InFunc )
{
	//default;
}

template<std::size_t Index = 0,typename FuncType,typename... VarTypes>
inline typename std::enable_if<Index < sizeof...(VarTypes),void>::type
TransformTuple(std::tuple<VarTypes...>& InTuple, FuncType InFunc)
{
	InFunc(std::get<Index>(InTuple));
	TransformTuple<Index + 1>(InTuple, InFunc);
}


