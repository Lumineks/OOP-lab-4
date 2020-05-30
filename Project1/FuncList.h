#pragma once
#include "Function.h"
ref class FuncList
{
private:
	ref struct List
	{
		Function ^ func;
		List^ next;
	};

	List ^ first;

public:

	FuncList();
	
	void Add(Function^ func);
	void Clear();
	double Sum();

	~FuncList();
};

