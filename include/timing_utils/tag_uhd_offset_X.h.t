/* -*- c++ -*- */
/*
 * <COPYRIGHT PLACEHOLDER>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

 /* @WARNING@ */

 #ifndef @GUARD_NAME@
 #define @GUARD_NAME@

#include <timing_utils/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace timing_utils {

    /*!
     * \brief <+description of block+>
     * \ingroup timing_utils
     *
     */
    class TIMING_UTILS_API @BASE_NAME@ : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<@BASE_NAME@> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of timing_utils::@BASE_NAME@.
       *
       * To avoid accidental use of raw pointers, timing_utils::@BASE_NAME@'s
       * constructor is in a private implementation
       * class. timing_utils::@BASE_NAME@::make is the public interface for
       * creating new instances.
       */
      static sptr make(float rate, uint32_t tag_interval);

      virtual void set_rate(float rate) = 0;
      virtual void set_interval(uint32_t tag_interval) = 0;
      virtual void set_key(pmt::pmt_t tag_key) = 0;
    };

  } // namespace timing_utils
} // namespace gr

#endif /* @GUARD_NAME@ */
