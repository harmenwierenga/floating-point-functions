#!/bin/env bash
find source include test -type f -iname *.hpp -o -iname *.cpp | xargs clang-format -i

