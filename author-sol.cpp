#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int A, B, C;
		cin >> A >> B >> C;
		int X, Y, Z;
		cin >> X >> Y >> Z;
		int ans = 0;
		for (int a = 0; a <= 20; a++) {
			for (int b = 0; b <= 20; b++) {
				for (int c = 0; c <= 20; c++) {
					// brute-force the number of problems to solve in EACH aspect [0, 20]
					// if the total time is less than or equal to 240 minutes, then take the maximum points
					int time = (a * A) + (b * B) + (c * C);
					if (time <= 240) {
						ans = max(ans, (a * X) + (b * Y) + (c * Z));
					}
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
