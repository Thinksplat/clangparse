g++ -fno-rtti -O0 -g `llvm-config --cxxflags` -I/tools/clang/include tooling_sample.cpp `llvm-config --ldflags`
