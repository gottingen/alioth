// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#pragma once

// IWYU pragma: begin_exports

#include <cstdint>
#include <memory>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

#include "alioth/array/data.h"
#include "alioth/buffer.h"
#include "alioth/chunked_array.h"

#include "alioth/compute/function.h"
#include "alioth/compute/kernel.h"
#include "alioth/compute/kernels/codegen_internal.h"
#include "alioth/compute/registry.h"
#include "alioth/datum.h"
#include "alioth/memory_pool.h"
#include "alioth/status.h"
#include "alioth/type.h"
#include "alioth/type_traits.h"
#include "alioth/util/checked_cast.h"
#include "alioth/util/logging.h"
#include "alioth/util/macros.h"

// IWYU pragma: end_exports

namespace arrow {

using internal::checked_cast;
using internal::checked_pointer_cast;

}  // namespace arrow
