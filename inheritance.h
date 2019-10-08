#pragma once

/*
Inheritance is a language mechanism that allows
you to inherit data and methods of some type
*/

struct human {
	int age;
	char* name;
};
struct progger {
	struct human prog_master;
	double salary;
};
void change_age_human(struct human* Human, int age) {
	Human->age = age;
}

