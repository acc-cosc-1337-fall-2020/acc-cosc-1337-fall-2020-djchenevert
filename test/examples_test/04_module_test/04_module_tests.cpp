#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "value_ref.h"
#include "vec.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test value and reference parameters")
{
	int num1 = 0, num2 =0;

	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 0);
	REQUIRE(num2 == 50);

}



TEST_CASE("Test function string value parameter"){

	std::string name = "john";

	loop_string_w_index(name);

	REQUIRE(name == "john");
}


TEST_CASE("Test function string reference parameter"){

	std::string name = "john";

	loop_string_w_index_ref(name);

	REQUIRE(name == "zzzz");
}

TEST_CASE("Test function string index for ranged parameter"){

	std::string name = "john";

	loop_string_w_index_for_ranged(name);

	REQUIRE(name == "john");
}

TEST_CASE("Test function string index for ranged reference parameter"){

	std::string name = "john";

	loop_string_w_index_for_ranged_ref(name);

	REQUIRE(name == "zzzz");
}



TEST_CASE("Test function vector value parameter")
{
	std::vector<int> nums{10, 4, 2};
	std::vector<int> expected_vector{10, 4, 2};

	loop_vector_w_index(nums);

	REQUIRE(nums == expected_vector);


}
