DeforaOS CPP
============

About CPP
---------

CPP is a macro preprocessor for the C programming language. It provides the
ability for the inclusion of header files, macro expansions, conditional
compilation, and line control.

CPP depends on the DeforaOS libSystem library (version 0.4.3 or above),
which is found on the website for the DeforaOS Project:
<https://www.defora.org/>.


Compiling CPP
-------------

CPP depends on the following components:

 * DeforaOS libSystem
 * An implementation of `make`
 * GTK-Doc for the API documentation

With GCC, this should then be enough to compile and install CPP:

    $ make install

To install CPP in a dedicated directory, like `/path/to/CPP`:

    $ make PREFIX="/path/to/CPP" install

Distributing CPP
----------------

DeforaOS CPP is subject to the terms of the GNU LGPL license (version 3).
Please see the `COPYING` file for more information.

Known issues
------------

* The cpp(1) binary may conflict with the system's own version.
* Macro expansions are not fully supported yet.

