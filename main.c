#include <stdio.h>

#include "encapsulation.h"
#include "inheritance.h"
#include "polymorphism.h"

int main(){

	//Encapsulation
	printf("<------------------->\r\nEncapsulation:");

	struct person person = { 17, "George" };
	struct person* p_person = &person;
	printf("\r\nAge before: %d", person.age);

	change_age_person(p_person, 22);
	printf("\r\nAge after: %d", person.age);

	//Inheritance
	printf("\r\n<------------------->\r\nInheritance");

	struct progger programmer = { 17, "George", 10000 };
	struct progger* p_programmer = &programmer;
	printf("\r\nAge before: %d", programmer.prog_master.age);

	change_age_human(p_programmer, 22);
	printf("\r\nAge after: %d", programmer.prog_master.age);

	//polymorphism
	printf("\r\n<------------------->\r\nPolymorphism");
	struct man george = { 17, "George" };

    printf("\r\nBefore: %s",george.name);
	george = change(george, "Semen");
    printf("\r\nAfter: %s",george.name);

    printf("\r\n\r\nBefore: %d",george.age);
    george = change(george, 31);
    printf("\r\nAfter: %d",george.age);

    printf("\r\n<------------------->\r\n");


	return 0;
}
