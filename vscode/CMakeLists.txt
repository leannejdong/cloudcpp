# cmake_minimum_required(VERSION 3.10)
# project(linux_app)

# set(CMAKE_CXX_STANDARD 17)

# add_executable(linux_app main.c)

cmake_minimum_required(VERSION 3.12)
project(threadtest)
set(CMAKE_CXX_STANDARD 20)
# set(BOOST_INCLUDEDIR /home/leanne/boost_1_78_0/home/leanne/boost-1.78/include/)
# set(BOOST_LIBRARYDIR /home/leanne/boost_1_78_0/home/leanne/boost-1.78/lib/)
#find_package(Boost COMPONENTS thread chrono REQUIRED)
find_package(Boost)
add_executable(main main.cpp)
#target_link_libraries(threadtest Boost::boost Boost::thread Boost::chrono Boost::headers)
target_link_libraries(main Boost::boost)