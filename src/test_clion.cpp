#include "test_clion/test_clion.hpp"

namespace test_clion {

Test::Test() {

}

Test::~Test() {

}

const std::string& Test::GetName() const {
    return name_;
}

void Test::SetName(const std::string& name) {
    name_ = name;
}

}