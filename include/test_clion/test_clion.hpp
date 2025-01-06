#pragma once

#include <string>

namespace test_clion {

class Test {
public:
    Test();

    ~Test();

    const std::string& GetName() const;

    void SetName(const std::string& name);

private:

    std::string name_;
};

}