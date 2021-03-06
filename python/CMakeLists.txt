# Copyright 2011 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# GNU Radio is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
#
# GNU Radio is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with GNU Radio; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street,
# Boston, MA 02110-1301, USA.

########################################################################
# Include python install macros
########################################################################
include(GrPython)
if(NOT PYTHONINTERP_FOUND)
    return()
endif()

########################################################################
# Install python sources
########################################################################
GR_PYTHON_INSTALL(
    FILES
    __init__.py
    ampl_diff.py 
    estimate_integer_delay.py
    pa_wiener_model.py
    upsample.py
    sixX_elliptic_filter.py
    eightX_elliptic_filter.py
    basic_qpskofdm_tx_withoutCP.py 
    STS_generator_withoutCP.py DESTINATION ${GR_PYTHON_DIR}/dpd
)

########################################################################
# Handle the unit tests
########################################################################
include(GrTest)

set(GR_TEST_TARGET_DEPS gnuradio-dpd)
set(GR_TEST_PYTHON_DIRS ${CMAKE_BINARY_DIR}/swig)
GR_ADD_TEST(qa_peak_detect ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_peak_detect.py)
GR_ADD_TEST(qa_sts_blocker ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_sts_blocker.py)
GR_ADD_TEST(qa_predistorter_training ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_predistorter_training.py)
GR_ADD_TEST(qa_stream_to_zero_padded_vector ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_stream_to_zero_padded_vector.py)
GR_ADD_TEST(qa_Agilent_N1996A ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_Agilent_N1996A.py)
GR_ADD_TEST(qa_stream_to_gmp_vector ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_stream_to_gmp_vector.py)
GR_ADD_TEST(qa_signum_func ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_signum_func.py)
GR_ADD_TEST(qa_gain_phase_calibrate ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_gain_phase_calibrate.py)
GR_ADD_TEST(qa_postdistorter ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_postdistorter.py)
GR_ADD_TEST(qa_stream_to_message ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_stream_to_message.py)
GR_ADD_TEST(qa_vector_vector_multiply ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_vector_vector_multiply.py)
