//===- SSPAttributes.cpp - SSP attribute implementation -------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file implements the SSP (static scheduling problem) dialect attributes.
//
//===----------------------------------------------------------------------===//

#include "circt/Dialect/SSP/SSPAttributes.h"
#include "circt/Dialect/SSP/SSPDialect.h"
#include "circt/Support/LLVM.h"

#include "mlir/IR/Builders.h"
#include "mlir/IR/DialectImplementation.h"

using namespace circt;
using namespace ssp;

#define GET_ATTRDEF_CLASSES
#include "circt/Dialect/SSP/SSPAttributes.cpp.inc"

void SSPDialect::registerAttributes() {
  addAttributes<
#define GET_ATTRDEF_LIST
#include "circt/Dialect/SSP/SSPAttributes.cpp.inc"
      >();
}