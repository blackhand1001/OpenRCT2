/*****************************************************************************
 * Copyright (c) 2014-2018 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include <openrct2/common.h>
#include "DrawCommands.h"

/*
 * Determines an aproximation of the number of depth peeling iterations needed
 * to render the command batch. It will never underestimate the number of
 * iterations, but it can overestimate, usually by no more than +2.
 */
int32_t MaxTransparencyDepth(const RectCommandBatch &transparent);
