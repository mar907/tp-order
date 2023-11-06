#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <Customer.hpp>
#include <iostream>
#include <memory>
#include <catch.hpp>

using namespace std;
 
TEST_CASE( "Correct getData from Customer", "[getName method]" )
{
    // Arrange
    auto customer1 = make_shared<Customer>("C001", "Customer1", "123 Main Street");
    
    // Act
    string customerName = customer1->getName();
    
    // Assert
    REQUIRE( customerName == "Customer1" );
}