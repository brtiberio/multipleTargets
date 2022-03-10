//
// Created by bruno on 3/5/22.
//

#include "gtest/gtest.h"

extern "C" {

#include "library.h"
#include "config.h"

}

TEST(hello, ok) {
    hello();
}

TEST(hello_projA, ok) {
    hello_projA();
}
