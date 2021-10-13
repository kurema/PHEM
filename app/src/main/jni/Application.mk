APP_STL := gnustl_static
APP_PLATFORM := android-8
APP_ABI := armeabi-v7a x86 arm64-v8a
NDK_TOOLCHAIN_VERSION := 4.9
#NDK_TOOLCHAIN_VERSION := clang

#Enable static_assert
APP_CPPFLAGS += -std=c++11
