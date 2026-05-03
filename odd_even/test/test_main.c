#include <unity.h>
#include <stdbool.h>

bool elements_are_odd(unsigned short array[2]) {
	bool truth = false;
	for(int i = 0; i < 2; i++) {
		if (i % 2 != 0) {
			truth = true;
		} else {
			continue;
		}
	}
	return truth;
}
		
bool elements_are_even(unsigned short array[2]) {
	bool truth = false;
	for(int i = 0; i < 2; i++) {
		if (i % 2 == 0) {
			truth = true;	
		} else {
			continue;
		}
	}
	return truth;
}

void test_odds_array_consistency() {
	unsigned short array[2] = {1, 2};
	bool test_answer;
	TEST_ASSERT_MESSAGE(test_answer == false, "A even element was founded!");
}

void test_evens_array_consistency() {
	unsigned short array[2] = {0, 1};
	bool test_answer;
	TEST_ASSERT_MESSAGE(test_answer == false, "A odd element was founded!");	
}

// Rodado antes de cada teste
void setUp(void) {}

// Rodado depois de cada teste
void tearDown(void) {}

int main() {
	UNITY_BEGIN();
	RUN_TEST(test_odds_array_consistency);
	RUN_TEST(test_evens_array_consistency);
	return UNITY_END();
}
