 A C++ library that searches a given directory for a file. The directory may have nested sub-directories which contains the file. It returns the location of the file. If there are multiple files with the same name, the lib returns every file’s location.
 
To use it first->
1)#include the library in your file.

Then to link the library to your file run the following command in terminal to create the executable file->

2)g++ {relative lib path from your file} {your filename} -o {your executable file}

eg-> for the file in the testing folder linking looked like this->
g++ ./../lib/find.cpp use.cpp -o use

After following above steps a executable file will be formed with the same name as your file to run the file use->

```
./use
Give file to search: todo
Give relative path from this file of the directory you want to search the file in: ./..
The relative path for the file you wanted to search from the current directory
./../todo-api/todo.
./../todo-api/files/todo.
```
