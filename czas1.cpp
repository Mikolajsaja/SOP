#include <iostream>
#include <String>

struct Czas{
	using value_type = unsigned int;
	value_type godzina;
	value_type minuta;
	value_type sekunda;
	
	Czas(value_type,value_type,value_type);
	auto to_string() const -> std::string;
	auto
};
	
Czas::Czas(value_type g, value_type m, value_type s)
	:godzina{g}
	,minuta{m}
	,sekunda{s}
{}

auto Czas::to_string() -> const -> std::string {
	return std::to_string(godzina)+":"+std::to_string(minuta)+":"+std::to_string(sekunda);
}

auto main() -> int {
	auto czas = czas{23, 59, 59};
	std::cout << czas.to_string() << "\n";
	return 0;
}
	
	
