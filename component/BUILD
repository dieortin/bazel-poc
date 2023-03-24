cc_library(
    name = "types",
    srcs = ["types/SomeComponentType.cpp"],
    hdrs = ["types/SomeComponentType.h"],
    deps = ["//core/types:generic-type"],
)

cc_library(
    name = "topics",
    srcs = ["topics/SomeTopic.cpp"],
    hdrs = ["topics/SomeTopic.h"],
    includes = ["topics"],
    visibility = ["//servers:__subpackages__"],
    deps = [":types"],
)
