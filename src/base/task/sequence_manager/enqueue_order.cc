// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/task/sequence_manager/enqueue_order.h"

namespace base {
namespace sequence_manager {
namespace internal {

EnqueueOrder::Generator::Generator() : counter_(kFirst) {}

EnqueueOrder::Generator::~Generator() = default;

}  // namespace internal
}  // namespace sequence_manager
}  // namespace base
