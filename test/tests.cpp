#include <cstdio>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("testing", "[testing]") {
    REQUIRE(std::string("testing") == "testing");
}