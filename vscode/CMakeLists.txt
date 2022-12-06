# cmake_minimum_required(VERSION 3.10)
# project(linux_app)

# set(CMAKE_CXX_STANDARD 17)

# add_executable(linux_app main.c)

cmake_minimum_required(VERSION 3.12)
project(threadtest)
set(CMAKE_CXX_STANDARD 20)
set(BOOST_INCLUDEDIR /home/leanne/boost_1_74_0/home/leanne/boost-1.74/include/)
set(BOOST_LIBRARYDIR /home/leanne/boost_1_74_0/home/leanne/boost-1.74/lib/)
find_package(Boost COMPONENTS thread chrono REQUIRED)
add_executable(threadtest main.cpp)
target_link_libraries(threadtest Boost::thread Boost::chrono Boost::headers)