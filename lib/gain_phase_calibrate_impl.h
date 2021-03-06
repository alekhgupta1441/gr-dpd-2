/* -*- c++ -*- */
/* 
 * Copyright 2016
 * Srikanth Pagadarai <srikanth.pagadarai@gmail.com>
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

#ifndef INCLUDED_DPD_GAIN_PHASE_CALIBRATE_IMPL_H
#define INCLUDED_DPD_GAIN_PHASE_CALIBRATE_IMPL_H

#include <dpd/gain_phase_calibrate.h>

namespace gr {
  namespace dpd {

    class gain_phase_calibrate_impl : public gain_phase_calibrate
    {
     private:
       gr_complex cfactor, previous_cfactor, current_cfactor;    
       int relative_sample_index, ninput_items, d_ref_len, item, nitems_to_skip;    
       uint64_t nread;
       bool d_reference_acquired, reference_acquired, packet_start;
       std::vector<gr::tag_t> tags; // container to hold tags        
       std::vector<gr_complex> d_reference_samples, reference_samples;

     public:
      gain_phase_calibrate_impl(int ref_len);
      ~gain_phase_calibrate_impl();

      void set_reference(pmt::pmt_t P); 

      int general_work(int noutput_items,
           gr_vector_int &ninput_items,
           gr_vector_const_void_star &input_items,
           gr_vector_void_star &output_items);
    };

  } // namespace dpd
} // namespace gr

#endif /* INCLUDED_DPD_GAIN_PHASE_CALIBRATE_IMPL_H */

