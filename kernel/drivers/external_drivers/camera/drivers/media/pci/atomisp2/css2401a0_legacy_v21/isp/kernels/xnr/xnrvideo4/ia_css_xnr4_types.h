/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2010 - 2015 Intel Corporation.
 * All Rights Reserved.
 *
 * The source code contained or described herein and all documents
 * related to the source code ("Material") are owned by Intel Corporation
 * or licensors. Title to the Material remains with Intel
 * Corporation or its licensors. The Material contains trade
 * secrets and proprietary and confidential information of Intel or its
 * licensors. The Material is protected by worldwide copyright
 * and trade secret laws and treaty provisions. No part of the Material may
 * be used, copied, reproduced, modified, published, uploaded, posted,
 * transmitted, distributed, or disclosed in any way without Intel's prior
 * express written permission.
 *
 * No License under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or
 * delivery of the Materials, either expressly, by implication, inducement,
 * estoppel or otherwise. Any license under such intellectual property rights
 * must be express and approved by Intel in writing.
 */
#ifndef __IA_CSS_XNR4_TYPES_H
#define __IA_CSS_XNR4_TYPES_H

#include "ia_css_xnr4_downsample_types.h"
#include "ia_css_xnr4_radial_metric_types.h"
#include "ia_css_xnr4_output_blend_types.h"

struct ia_css_xnr4_config {
	struct ia_css_xnr4_downsample_config xnr4_downsample_config;
	struct ia_css_xnr4_radial_metric_config xnr4_radial_metric_config;
	struct ia_css_xnr4_output_blend_config xnr4_output_blend_config;
};

#endif /* __IA_CSS_XNR4_TYPES_H */
