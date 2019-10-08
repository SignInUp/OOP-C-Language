#pragma once

/*
Encapsulation is a type of ability to
relate data of this type to its methods
*/

struct person {
	int age;
	char* name;
};

void change_age_person(struct person* person, int age) {
	person->age = age;
}
