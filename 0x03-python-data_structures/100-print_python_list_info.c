#include <Python.h>
#include <stdio.h>

void print_python_list_info(PyObject *p) {
    PyListObject *list = (PyListObject *)p;

    printf("[*] Size of the Python List = %ld\n", PyList_Size(p));
    printf("[*] Allocated = %ld\n", list->allocated);

    for (Py_ssize_t i = 0; i < PyList_Size(p); i++) {
        PyObject *item = PyList_GET_ITEM(p, i);
        const char *typeName = Py_TYPE(item)->tp_name;
        printf("Element %ld: %s\n", i, typeName);
    }
}

