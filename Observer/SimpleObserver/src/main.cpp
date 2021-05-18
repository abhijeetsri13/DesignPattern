#include<iostream>
#include"SubjectImpl.h"
#include"ObserverImpl.h"

int main()
{
	SubjectImpl *sub_obj = new SubjectImpl();
	ObserverImpl *obse_1 = new ObserverImpl(*sub_obj);
	ObserverImpl *obse_2 = new ObserverImpl(*sub_obj);

	sub_obj->DoActivity("Some Activity");

	obse_1->LogObserverInfo();
	obse_2->LogObserverInfo();


	delete obse_1;
	delete obse_2;
	delete sub_obj;
	return 0;
}