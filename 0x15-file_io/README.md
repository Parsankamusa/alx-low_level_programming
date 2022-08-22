0x15-file_io
The open() function  establish the connection between a file and a file descriptor. It  create an open file description that refers to a file and a file descriptor that refers to that open file description. The file descriptor is used by other I/O functions to refer to that file. The path argument points to a pathname naming the file.

path
The name of the file to open. It includes the file path defining where, in which file system, the file is found (or should be created).

openat expects a relative path.

oflag
This argument formed by OR'ing together optional parameters and (from <fcntl.h>) one of:
O_RDONLY, O_RDWR and O_WRONLY

Option parameters include:
O_APPEND-data written will be appended to the end of the file. The file operations will always adjust the position pointer to the end of the file.
O_CREAT-Create the file if it does not exist; otherwise the open fails setting errno to ENOENT.
O_EXCL-Used with O_CREAT if the file already exists, then fail, setting errno to EEXIST.
O_TRUNC-If the file already exists then discard its previous contents, reducing it to an empty file. Not applicable for a device or named pipe.
