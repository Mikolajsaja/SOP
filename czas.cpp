#include <iostream>
#include <String>

struct Czas{
	using value_type = unsignet int;
	value_type godzina;
	value_type minuta;
	value_type sekunda;
	
	Czas(value_type,value_type,value_type);
	
	auto to_string() -> std::string;
};

Czas::Czas(value_type g, value_type m, value_type s)
	:godzina{g}
	,minuta{m}
	,sekunda{s}
{}

auto main() -> int{
	auto czas = Czas(23, 59, 59);
	return 0;
}

