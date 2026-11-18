cmake_minimum_required(VERSION 3.20) #минимальный версия смаке


set(APP_NAME MoneyMind) #создал переменую APP_name
project(${APP_NAME}) #название проекта

set(CMAKE_CXX_STANDARD 20) # версия с++20

set(CMAKE_CXX_STANDARD_REQUIRED ON) #Это означает, что использование указанного стандарта обязательно.



add_executable(MoneyMind src/main.cpp) #Она создаёт исполняемую программу.


message(STATUS "Project: ${PROJECT_NAME}") #выводит сообщение в терминал при конфигурации CMake.