#include <Python.h>

int
main(int argc, char *argv[])
{
  Py_Initialize();
  FILE* fp;
  fp = fopen("testmodule.py", "r");
  PyRun_AnyFile(fp, " ");
  Py_Finalize();
  return 0;
}