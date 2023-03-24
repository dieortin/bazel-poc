# Bazel native build
#cc_library(
#    name = "src",
#    srcs = glob(["*.cpp"]),
#    hdrs = glob(["*.h"]),
#    visibility = ["//component:__pkg__"],
#)

# CMake build with rules_foreign_cc
load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

filegroup(
    name = "srcs",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"],
)

cmake(
    name = "generic-type",
    lib_source = ":srcs",
    out_include_dir = "include",
    out_lib_dir = "lib",
    #    out_include_dir = "include/version123",
    out_static_libs = ["libgeneric-type.a"],
    visibility = ["//component:__pkg__"],
)
