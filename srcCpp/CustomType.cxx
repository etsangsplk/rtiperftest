/*
 * (c) 2005-2018  Copyright, Real-Time Innovations, Inc. All rights reserved.
 * Subject to Eclipse Public License v1.0; see LICENSE.md for details.
 */
#include "CustomType.h"

/*
 * This is the source code file that contains the implementation of the API
 * required to work with the Custom type.
 */

bool initialize_custom_type_data(RTI_CUSTOM_TYPE &data)
{
    return true;
}

void register_custom_type_data(RTI_CUSTOM_TYPE &data, unsigned long key)
{
}

bool set_custom_type_data(
        RTI_CUSTOM_TYPE &data,
        unsigned long key,
        int target_data_len)
{
    return true;
}

bool finalize_custom_type_data(RTI_CUSTOM_TYPE &data)
{
    return true;
}

bool initialize_custom_type_dynamic_data(DDS_DynamicData &data)
{
    return true;
}

void register_custom_type_dynamic_data(DDS_DynamicData &data, unsigned long key)
{
}

bool set_custom_type_dynamic_data(
        DDS_DynamicData &data,
        unsigned long key,
        int target_data_len)
{
    return true;
}

bool finalize_custom_type_dynamic_data(DDS_DynamicData &data)
{
    return true;
}