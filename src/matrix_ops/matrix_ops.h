//
//  matrix_ops.h
//  jpcnn
//
//  Created by Peter Warden on 1/9/14.
//  Copyright (c) 2014 Jetpac, Inc. All rights reserved.
//

#ifndef INCLUDE_MATRIX_OPS_H
#define INCLUDE_MATRIX_OPS_H

#include "jpcnn.h"

class Buffer;

void add_matrix_inplace(Buffer* output, Buffer* input, jpfloat_t inputScale);

#endif // INCLUDE_MATRIX_OPS_H
