echo on

bazel test --test_output=all --test_timeout=900 //private_set_intersection/cpp/...
bazel test --test_output=all --test_timeout=900 //private_set_intersection/c/...
