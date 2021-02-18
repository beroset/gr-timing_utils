/* -*- c++ -*- */
/*
 * Copyright 2018-2021 National Technology & Engineering Solutions of
 * Sandia, LLC (NTESS). Under the terms of Contract DE-NA0003525 with NTESS, the U.S.
 * Government retains certain rights in this software.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_TIMING_UTILS_TAG_UHD_OFFSET_IMPL_H
#define INCLUDED_TIMING_UTILS_TAG_UHD_OFFSET_IMPL_H

#include <timing_utils/constants.h>
#include <timing_utils/tag_uhd_offset.h>

namespace gr {
namespace timing_utils {

template <class T>
class tag_uhd_offset_impl : public tag_uhd_offset<T>
{
private:
    float d_rate;
    uint32_t d_interval;
    uint64_t d_next_tag_offset;
    uint64_t d_total_nitems_read;
    pmt::pmt_t d_time_tag;
    uint64_t d_time_tag_offset;
    uint64_t d_time_tag_int_sec;
    double d_time_tag_frac_sec;
    pmt::pmt_t d_key;
    bool d_tagging_enabled;

    void set_time_tag(tag_t);
    void update_time_tag(uint64_t);

public:
    tag_uhd_offset_impl(float rate, uint32_t tag_interval);
    ~tag_uhd_offset_impl() override;

    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items) override;

    void set_rate(float rate) override;
    void set_interval(uint32_t tag_interval) override;
    void set_key(pmt::pmt_t tag_key) override;
};

} // namespace timing_utils
} // namespace gr

#endif /* INCLUDED_TIMING_UTILS_TAG_UHD_OFFSET_IMPL_H */
