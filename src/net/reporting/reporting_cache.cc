// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "net/reporting/reporting_cache.h"

#include "net/reporting/reporting_cache_impl.h"
#include "net/reporting/reporting_context.h"

namespace net {

// static
std::unique_ptr<ReportingCache> ReportingCache::Create(
    ReportingContext* context,
    PersistentReportingStore* store) {
  return std::make_unique<ReportingCacheImpl>(context, store);
}

ReportingCache::~ReportingCache() = default;

}  // namespace net
