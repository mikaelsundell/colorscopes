# Copyright 2022-present Contributors to the vectorscope project.
# SPDX-License-Identifier: BSD-3-Clause
# https://github.com/mikaelsundell/vectorscope

cmake_minimum_required( VERSION 3.0 )
project( Coloranalyzer )

# packages
set (qt5_modules Core Gui Widgets)
find_package (Qt5 COMPONENTS ${qt5_modules})
set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
if (Qt5_POSITION_INDEPENDENT_CODE)
    set (CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()

# sources
set (app_sources
    vectorscopewidget.cpp
    vectorscopewidget.h
    colortools.cpp
    colortools.h
    imagewidget.h
    imagewidget.cpp
    main.cpp
    coloranalyzer.cpp
    coloranalyzer.h
    about.ui
    coloranalyzer.ui
)

if (Qt5_FOUND)
    add_executable (Coloranalyzer ${app_sources})
    target_include_directories (Coloranalyzer PRIVATE ${OPENGL_INCLUDE_DIR})
    target_link_libraries (Coloranalyzer 
        Qt5::Core Qt5::Gui Qt5::Widgets )
else ()
    message (WARNING "Qt not found, Coloranalyzer program will not be built.")
endif ()
