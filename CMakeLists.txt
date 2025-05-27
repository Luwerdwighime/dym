cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
project(dym LANGUAGES CXX)

set(HPP_FILES
#  src/cfg.hpp
#  src/config.hpp
#  src/fs.hpp
#  src/ini.hpp
#  src/user.hpp
#  src/yt_dlp.hpp
)
set(CPP_FILES
  src/main.cpp
#  src/cfg.cpp
#  src/fs.cpp
#  src/ini.cpp
#  src/user.cpp
#  src/yt_dlp.cpp
)
add_executable(dym ${HPP_FILES} ${CPP_FILES})

