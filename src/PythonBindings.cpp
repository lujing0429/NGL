#include <pybind11/pybind11.h>
#include <pybind11/operators.h>

namespace ngl
{
namespace py = pybind11;
// each cpp file will have an init function to do the binding
// see http://pybind11.readthedocs.io/en/master/faq.html#how-can-i-reduce-the-build-time
extern void pyInitVec4(py::module & m);
extern void pyInitVec3(py::module & m);

PYBIND11_PLUGIN(pyngl)
{
    py::module m("pyngl", "pyngl module ");


    pyInitVec4(m);
    pyInitVec3(m);

    return m.ptr();
}

}