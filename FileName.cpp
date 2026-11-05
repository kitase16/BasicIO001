#include <cstdio>
#include <string_view>

#pragma warning(disable: 4996)
#pragma warning(disable: 26812)

template<class FiP>
void Output(const FiP& fp,std::string_view sv) {
	std::fputs(sv.data(), fp);
}

template<class FiP>
std::string_view Input(const FiP& fp ,const unsigned int& Size=16) {

	enum{S=Size};

	std::string_view::value_type D[1+S];

	std::fgets(D, S, (FiP*) &fp);
	return std::string_view(D, std::strlen(D));
}

template<class FiP>
bool IsEndOfFile(const FiP& fp) {
	return std::feof(&fp);
}

int main() {

	Output(stdout, "Hello World!\n");
	auto A = Input(*stdin,128);

	if (IsEndOfFile(*stdin)) {
		Output(stdout, "End of File Reached!\n");
	}
}