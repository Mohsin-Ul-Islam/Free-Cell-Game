# cmake version to be used
cmake_minimum_required( VERSION 3.0 )

# project name
project( FCG )

# flags

# files

# include
include_directories( ./include ./src ./libs/Console/src ./libs/Console/include)

# target
add_executable( binary ./src/main.cpp ./src/Game.cpp ./src/Deck.cpp ./src/Board.cpp ./src/Card.cpp )

# external libs
add_subdirectory( ./libs/Console )
target_link_libraries( binary console )

#-- add_subdirectory( ./libs/Randomize )
#-- target_link_libraries( binary randomize )

#--add_library(randomize STATIC IMPORTED)
#--set_property(TARGET randomize PROPERTY IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/libs/Randomize/librandomize.a)
#--target_link_libraries( binary randomize )
