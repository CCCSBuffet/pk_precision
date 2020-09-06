#include <iostream>
#include <iomanip>
#include <limits>

typedef std::numeric_limits< double > dbl;

using namespace std;

int main(int argc, char *argv[])
{
	const int w = 20;
	unsigned int original_precision = cout.precision();
	cout.precision(dbl::max_digits10);
	cout << setw(5) << "Den.";
	cout << setw(w) << "Float" << " ";
	cout << setw(w) << "Double";
	cout << endl;

	for (int denominator = 1; denominator < 100; denominator++)
	{
		float fresult = 1.0f / (float) denominator;
		float fremade = fresult * denominator;
		double dresult = 1.0 / (double) denominator;
		double dremade = dresult * denominator;

		if (dremade != 1.0 || fremade != 1.0f) {
			cout << "[" << setw(3) << denominator << "] ";
			cout << setw(w) << fremade << " ";
			cout << setw(w) << dremade << endl;
		}
	}

	return 0;
}
