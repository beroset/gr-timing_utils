/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(interrupt_emitter.h)                                       */
/* BINDTOOL_HEADER_FILE_HASH(395d15ed3e679d708aff20dc67dd2253)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/timing_utils/interrupt_emitter.h>
// pydoc.h is automatically generated in the build directory
#include <interrupt_emitter_pydoc.h>

template <typename T>
void bind_interrupt_emitter_template(py::module& m, const char* classname)
{
    using interrupt_emitter = ::gr::timing_utils::interrupt_emitter<T>;

    py::class_<interrupt_emitter,
               gr::block,
               gr::basic_block,
               std::shared_ptr<interrupt_emitter>>(m, classname)
        .def(py::init(&interrupt_emitter::make),
             py::arg("rate"),
             py::arg("drop_late"),
             py::arg("loop_gain") = .0001)
        .def("set_rate", &interrupt_emitter::set_rate, py::arg("rate"))
        .def("set_debug", &interrupt_emitter::set_debug, py::arg("value"));
}
void bind_interrupt_emitter(py::module& m)
{
    bind_interrupt_emitter_template<unsigned char>(m, "interrupt_emitter_b");
    bind_interrupt_emitter_template<short>(m, "interrupt_emitter_s");
    bind_interrupt_emitter_template<int32_t>(m, "interrupt_emitter_i");
    bind_interrupt_emitter_template<float>(m, "interrupt_emitter_f");
    bind_interrupt_emitter_template<gr_complex>(m, "interrupt_emitter_c");
}