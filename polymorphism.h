#pragma once

/*
Polymorphism is the ability of code with the same
specification to have different implementations
*/

struct man {
	int age;
	char* name;
};

struct man change_age_man(struct man human, int age) {
	struct man new_human = {age, human.name};
	return new_human;
}

struct man change_name_man(struct man human, char *name) {
	struct man new_human = {human.age, name};
	return new_human;
}


#define change(human, param) _Generic((human),	\
    struct man:	_Generic((param), \
        int:	change_age_man, \
        char*:	change_name_man \
    ) \
)(human, param)

