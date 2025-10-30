#CMakeLists.txt

# تنظیم حداقل نسخه مورد نیاز CMake
cmake_minimum_required(VERSION 3.10)

# تعریف پروژه به نام "CNG" (C New Grammar)
project(CNG LANGUAGES CXX)

# اضافه کردن پوشه‌ای که کدهای کامپایلر ما در آن قرار می‌گیرد
add_subdirectory(compiler)
