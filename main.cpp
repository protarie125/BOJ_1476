#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int te, ts, tm;
	cin >> te >> ts >> tm;

	auto e = int{ 1 };
	auto s = int{ 1 };
	auto m = int{ 1 };
	auto y = int{ 1 };

	while (te != e || ts != s || tm != m) {
		++y;

		++e;
		if (16 == e) {
			e -= 15;
		}

		++s;
		if (29 == s) {
			s -= 28;
		}

		++m;
		if (20 == m) {
			m -= 19;
		}
	}

	cout << y;

	return 0;
}