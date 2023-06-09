#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include <iostream>

// g++ main.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp Warlock.cpp
// https://github.com/pasqualerossi/42-School-Exam-Rank-05/blob/main/cpp_module_01/Warlock.cpp
// https://github.com/WalterLuong/42_exam05/blob/master/cpp_01/Warlock.hpp

int main()
{
	Warlock richard("Richard", "the Titled");

	Dummy bob;
	Fwoosh* fwoosh = new Fwoosh();

	richard.learnSpell(fwoosh);

	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", bob);
	return 0;
}