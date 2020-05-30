#include "FuncList.h"

FuncList::FuncList()
{
	first = nullptr;

}

void FuncList::Add(Function^ func)
{
	List^ temp = gcnew List;
	temp->func = func;
	temp->next = first;
	first = temp;
}

void FuncList::Clear()
{
	FuncList::~FuncList();
}

double FuncList::Sum()
{
	if (first == nullptr)
		return 0.0;

	double sum = 0.0;
	List^ temp = first;
	while (temp != nullptr)
	{
		sum +=System::Convert::ToDouble(temp->func->CalculateValue());
		temp = temp->next;
	}

	return sum;
}

FuncList::~FuncList()
{
	List^ temp = first;

	while (temp != nullptr)
	{
		first = first->next;
		delete temp;
		temp = first;
	}
}
