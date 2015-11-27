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


Copyright and license
----
Copyright (c) 2015 yoggy

Released under the [MIT license](LICENSE.txt)

