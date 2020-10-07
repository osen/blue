cmake_minimum_required(VERSION 2.6)
project(COOLENG)

include_directories(
  src
)

if(MSVC)
  include_directories(
    contrib/msvc-windows-x86_64/include
  )

  link_directories(
    ${PROJECT_SOURCE_DIR}/contrib/msvc-windows-x86_64/lib
  )
endif()

add_definitions(-DSDL_MAIN_HANDLED)

add_library(rend
  src/rend/Exception.cpp
  src/rend/Context.cpp
  src/rend/Texture.cpp
  src/rend/RenderTexture.cpp
  src/rend/Shader.cpp
  src/rend/Buffer.cpp
  src/rend/Mesh.cpp
  src/rend/Util.cpp
)
if(MSVC OR MINGW)
  target_link_libraries(rend glew32 opengl32)
else()
  target_link_libraries(rend GLEW GL)
endif()

add_library(cooleng
  src/cooleng/Core.cpp
  src/cooleng/Core.h
  src/cooleng/Entity.cpp
  src/cooleng/Entity.h
  src/cooleng/Component.cpp
  src/cooleng/Component.h
)
target_link_libraries(cooleng rend)

add_executable(demo
  src/demo/main.cpp
  src/demo/Player.cpp
)
target_link_libraries(demo cooleng)
