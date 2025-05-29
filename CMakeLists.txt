cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
project(dym LANGUAGES C CXX)

set(C_FILES src/inih/ini.c)
set_source_files_properties(${C_FILES} PROPERTIES LANGUAGE C)
set(H_FILES
  src/Cfg.hpp
  src/config.hpp
#  src/Fs.hpp
  src/inih/ini.h
  src/inih/INIReader.hpp
  src/User.hpp
#  src/Yt_dlp.hpp
)
set(CPP_FILES
  src/main.cpp
  src/Cfg.cpp
#  src/Fs.cpp
#  src/inih/ini.c
  src/inih/INIReader.cpp
  src/User.cpp
#  src/Yt_dlp.cpp
)
add_executable(dym ${H_FILES} ${C_FILES} ${CPP_FILES})

