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

#ifndef INCLUDED_DPD_EXTERNALS_GAUSS_SMOOTH_H
#define INCLUDED_DPD_EXTERNALS_GAUSS_SMOOTH_H

#include <complex>

typedef std::complex<double> gr_complexd;

const int sr_len = 10;
const double w[10] = {0.013772313575060, 0.047333969807502, 0.119480615091568, 0.221503433838812, 0.301593494919519, 0.301593494919519, 0.221503433838812, 0.119480615091568, 0.047333969807502, 0.013772313575060}; 

void gauss_smooth(gr_complexd *sr, gr_complexd &out);

#endif /*INCLUDED_DPD_EXTERNALS_GAUSS_SMOOTH_H*/
