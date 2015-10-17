/*
 * Copyright (c) 2015, The Regents of the University of California (Regents).
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *    1. Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *
 *    3. Neither the name of the copyright holder nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS AS IS
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Please contact the author(s) of this library if you have any questions.
 * Authors: Erik Nelson            ( eanelson@eecs.berkeley.edu )
 *          David Fridovich-Keil   ( dfk@eecs.berkeley.edu )
 */

///////////////////////////////////////////////////////////////////////////////
//
// This file defines helpful drawing/debugging utilities for images, feature
// matching, and SFM.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef BSFM_IMAGE_DRAWING_UTILS_H
#define BSFM_IMAGE_DRAWING_UTILS_H

#include "image.h"
#include "../matching/feature_match.h"

namespace bsfm {
namespace drawing {

// Annotate an image by drawing features on it.
void AnnotateFeatures(const FeatureList& features, Image& image,
                      unsigned int radius = 3,
                      unsigned int line_thickness = 2);

// Draw features as circles in an image.
void DrawImageFeatures(const FeatureList& features, const Image& image,
                       const std::string& window_name = std::string(),
                       unsigned int radius = 3,
                       unsigned int line_thickness = 2);

// Given two images, and data containing their features and matches between
// those features, draw the two images side by side, with matches drawn as lines
// between them.
void DrawImageFeatureMatches(const Image& image1, const Image& image2,
                             const FeatureMatchList& feature_matches,
                             const std::string& window_name = std::string(),
                             unsigned int line_thickness = 1);

}  //\namespace drawing
}  //\namespace bsfm

#endif
