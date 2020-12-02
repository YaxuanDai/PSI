//
// Copyright 2020 the authors listed in CONTRIBUTORS.md
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef PRIVATE_SET_INTERSECTION_C_INTERNAL_UTILS_H_
#define PRIVATE_SET_INTERSECTION_C_INTERNAL_UTILS_H_

#include "util/status.inc"

namespace private_set_intersection {

namespace c_bindings_internal {
int generate_error(private_join_and_compute::Status status, char** error_out);

}  // namespace c_bindings_internal

}  // namespace private_set_intersection
#endif  // PRIVATE_SET_INTERSECTION_C_INTERNAL_UTILS_H_
