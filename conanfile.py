from conan import ConanFile
from conan.tools.cmake import cmake_layout

class FloatingPointFunctionsRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"

    def requirements(self):
        self.requires("gtest/1.13.0")
    
    def layout(self):
        cmake_layout(self)

