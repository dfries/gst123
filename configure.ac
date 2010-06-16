AC_INIT([gst123], [0.1.1])
AC_CONFIG_SRCDIR([src/gst123.cc])
AC_CONFIG_HEADER([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE
AC_PROG_CXX
AC_PROG_CC

dnl
dnl Define package requirements.
dnl
AC_DEFUN([AC_GSTREAMER_REQUIREMENTS],
[
    dnl We need GLib with friends
    PKG_CHECK_MODULES(GSTREAMER, gstreamer-0.10)
    AC_SUBST(GSTREAMER_CFLAGS)
    AC_SUBST(GSTREAMER_LIBS)
])

dnl
dnl Define gstreamer interface
dnl
AC_DEFUN([AC_GSTREAMER_GTK_REQUIREMENTS],
[
    dnl We need GLib with friends
    PKG_CHECK_MODULES(GSTREAMER_GTK, gstreamer-base-0.10 gtk+-2.0 gstreamer-interfaces-0.10 gstreamer-video-0.10)
    AC_SUBST(GSTREAMER_GTK_CFLAGS)
    AC_SUBST(GSTREAMER_GTKLIBS)
])

dnl
dnl We need libX11
dnl
AC_DEFUN([AC_X11_REQUIREMENTS],
[
    AC_CHECK_LIB(X11, XOpenDisplay)
    X11_LIBS='-lX11'
    AC_SUBST(X11_LIBS)
])

dnl
dnl We need libncurses
dnl
AC_DEFUN([AC_NCURSES_REQUIREMENTS],
[
    AC_CHECK_LIB(ncurses, initscr)
    NCURSES_LIBS='-lncurses'
    AC_SUBST(NCURSES_LIBS)
])

# Check requirement sets
AC_GSTREAMER_REQUIREMENTS
AC_GSTREAMER_GTK_REQUIREMENTS
AC_X11_REQUIREMENTS
AC_NCURSES_REQUIREMENTS

AC_CONFIG_FILES([Makefile src/Makefile docs/Makefile])
AC_OUTPUT