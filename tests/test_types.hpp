// (C) Copyright Gonzalo Brito Gadeschi 2013
// Use, modification and distribution are subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt).

#if !defined(SCATTERED_TESTS_TEST_TYPES_HPP)
#define SCATTERED_TESTS_TEST_TYPES_HPP

#include <boost/fusion/adapted/struct/adapt_assoc_struct.hpp>

struct TestType {
  float x;
  double y;
  int i;
  bool b;
  struct k { struct x {}; struct y {}; struct i {}; struct b {}; };
};

// This adapts the struct as an associative fusion sequence
BOOST_FUSION_ADAPT_ASSOC_STRUCT(
    TestType, (float, x, TestType::k::x)(double, y, TestType::k::y)
              (int  , i, TestType::k::i)(bool  , b, TestType::k::b))

#endif  // SCATTERED_TESTS_TEST_TYPES_HPP
