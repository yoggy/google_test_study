google_test_study
====
Google Test
  - https://github.com/google/googletest

How to
----
for Ubuntu 14.04...

    $ git clone https://github.com/yoggy/google_test_study.git
    $ cd google_test_study
    
    $ sudo apt-get install libgtest-dev cmake
    $ pushd /usr/src/gtest
    $ sudo cmake .
    $ sudo make
    $ cp *.a /usr/local/lib
    $ popd
    
    $ cmake . 
    $ make
    $ ./unittest

Sample
----

    #include <gtest/gtest.h>
    
    TEST(UnitTestName, Test01)
    {
        // bool
        bool b0 = true, b1 = false;
        ASSERT_TRUE(b0);
        ASSERT_FALSE(b1);
    
        // int
        int n = 1;
        ASSERT_EQ(1, n);
    
        const char *str = "testtesttest";
        ASSERT_STREQ("testtesttest", str);
    
        // float
        float f = 0;
        for (int i = 0; i < 10000; ++i) {
            f += 0.1;
        }
        ASSERT_NEAR(1000.0f, f, 0.1f);  // <- f is 999.903...
    }
    
    int main(int argc, char * argv[])
    {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }

Reference
----
  - https://github.com/google/googletest/blob/master/googletest/docs/Documentation.md
  - https://github.com/google/googletest/blob/master/googletest/docs/Primer.md
  - https://github.com/google/googletest/blob/master/googletest/docs/AdvancedGuide.md

Copyright and license
----
Copyright (c) 2015 yoggy

Released under the [MIT license](LICENSE.txt)

