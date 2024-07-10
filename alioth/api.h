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

// Coarse public API while the library is in development

#pragma once

#include "alioth/array.h"                    // IWYU pragma: export
#include "alioth/array/array_run_end.h"      // IWYU pragma: export
#include "alioth/array/concatenate.h"        // IWYU pragma: export
#include "alioth/buffer.h"                   // IWYU pragma: export
#include "alioth/builder.h"                  // IWYU pragma: export
#include "alioth/chunked_array.h"            // IWYU pragma: export
#include "alioth/compare.h"                  // IWYU pragma: export
#include "alioth/config.h"                   // IWYU pragma: export
#include "alioth/datum.h"                    // IWYU pragma: export
#include "alioth/extension_type.h"           // IWYU pragma: export
#include "alioth/memory_pool.h"              // IWYU pragma: export
#include "alioth/pretty_print.h"             // IWYU pragma: export
#include "alioth/record_batch.h"             // IWYU pragma: export
#include "alioth/result.h"                   // IWYU pragma: export
#include "alioth/status.h"                   // IWYU pragma: export
#include "alioth/table.h"                    // IWYU pragma: export
#include "alioth/table_builder.h"            // IWYU pragma: export
#include "alioth/tensor.h"                   // IWYU pragma: export
#include "alioth/type.h"                     // IWYU pragma: export
#include "alioth/util/key_value_metadata.h"  // IWYU pragma: export
#include "alioth/visit_array_inline.h"       // IWYU pragma: export
#include "alioth/visit_scalar_inline.h"      // IWYU pragma: export
#include "alioth/visitor.h"                  // IWYU pragma: export

/// \brief Top-level namespace for Apache Arrow C++ API
namespace arrow {}
