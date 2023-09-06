#include <Python.h>
#include <stdio.h>
#include <Python3.8/Python.h>

void print_python_string(PyObject *p) {
    // Check if the object is a string
    if (PyUnicode_Check(p)) {
        // Extract information about the string
        Py_UNICODE *value;
        Py_ssize_t length;
        PyObject *repr;

        // Get the value and length of the string
        value = PyUnicode_AsUnicode(p);
        length = PyUnicode_GET_LENGTH(p);

        // Create a Python repr of the string
        repr = PyObject_Repr(p);

        // Print the string object info
        printf("[.] string object info\n");
        printf("  type: %s\n", PyUnicode_IS_COMPACT_ASCII(p) ? "compact ascii" : "compact unicode object");
        printf("  length: %zd\n", length);
        printf("  value: %ls\n", value);

        // Clean up
        Py_XDECREF(repr);
    } else {
        // Print an error message for invalid string objects
        fprintf(stderr, "[.] string object info\n");
        fprintf(stderr, "  [ERROR] Invalid String Object\n");
    }
}

