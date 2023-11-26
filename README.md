Readme for logctool
==================

[![License](https://img.shields.io/badge/license-BSD%203--Clause-blue.svg?style=flat-square)](https://github.com/mikaelsundell/logctool/blob/master/README.md)

Introduction
------------

Coloranalyzer is a app to analyze images using vectorscope, waveform and histogram scopes.

Building
--------

The coloranalyzer app can be built both from commandline or using optional Xcode `-GXcode`.

```shell
mkdir build
cd build
cmake .. -DCMAKE_MODULE_PATH=<path>/logctool/modules -DCMAKE_INSTALL_PREFIX=<path> -DCMAKE_PREFIX_PATH=<path> -GXcode
cmake --build . --config Release -j 8
```

**Example using 3rdparty on arm64**

```shell
mkdir build
cd build
cmake ..
cmake .. -DCMAKE_INSTALL_PREFIX=<path>/3rdparty/build/macosx/arm64.debug -DCMAKE_INSTALL_PREFIX=<path>/3rdparty/build/macosx/arm64.debug -DCMAKE_CXX_FLAGS="-I<path>/3rdparty/build/macosx/arm64.debug/include/eigen3" -DBUILD_SHARED_LIBS=TRUE -GXcode
```

Project
-------

* GitHub page   
https://github.com/mikaelsundell/coloranalyzer
* Issues   
https://github.com/mikaelsundell/coloranalyzer/issues


Copyright
---------

* ColorTools 
2010 Simon Andreas Eugster <simon.eu@gmail.com>
