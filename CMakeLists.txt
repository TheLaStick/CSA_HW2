cmake_minimum_required(VERSION 3.20)
project(CSA_HW1)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        # headers
        headers/random.h
        headers/flower.h
        headers/bush.h
        headers/plant.h
        headers/container.h
        headers/tree.h

        # Sources
        Sources/flower.cpp
        Sources/bush.cpp
        Sources/plant.cpp
        Sources/container.cpp
        Sources/main.cpp
        Sources/tree.cpp
        )

add_executable(CSA_HW1 Sources/main.cpp headers/container.h headers/random.h headers/flower.h headers/bush.h headers/plant.h headers/tree.h Sources/container.cpp Sources/flower.cpp Sources/bush.cpp Sources/tree.cpp Sources/plant.cpp)
