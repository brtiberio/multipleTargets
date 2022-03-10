//
// Created by bruno on 3/5/22.
//

#include "gtest/gtest.h"

extern "C" {

#include "config.h"
#include "library.h"
}

TEST(hello, ok) {
    hello();
}

TEST(hello_projB, ok) {
    hello_projB();
}
