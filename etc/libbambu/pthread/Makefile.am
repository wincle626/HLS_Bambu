#this file is libbambu/pthread/Makefile.am
METASOURCES = AUTO
CC=../$(top_builddir)/src/tree-panda-gcc
CFLAGS=
pkglib_LIBRARIES =
common_treegccflags = --output-temporary-directory=/tmp -iplugindir=$(top_builddir)/gcc_plugin -finline-limit=10000 -O3 -I$(BOOST_DIR)

if BUILD_I386_GCC45
pkglib_LIBRARIES += libpthread_gcc45.a
libpthread_gcc45_a_SOURCES = pthread.c
libpthread_gcc45_a_CFLAGS = --compiler=I386_GCC45 $(common_treegccflags)
endif

if BUILD_I386_GCC46
pkglib_LIBRARIES += libpthread_gcc46.a
libpthread_gcc46_a_SOURCES = pthread.c
libpthread_gcc46_a_CFLAGS = --compiler=I386_GCC46  $(common_treegccflags)
endif

if BUILD_I386_GCC47
pkglib_LIBRARIES += libpthread_gcc47.a
libpthread_gcc47_a_SOURCES = pthread.c
libpthread_gcc47_a_CFLAGS = --compiler=I386_GCC47  $(common_treegccflags)
endif

if BUILD_I386_GCC48
pkglib_LIBRARIES += libpthread_gcc48.a
libpthread_gcc48_a_SOURCES = pthread.c
libpthread_gcc48_a_CFLAGS = -fno-tree-loop-distribute-patterns --compiler=I386_GCC48  $(common_treegccflags)
endif

if BUILD_I386_GCC49
pkglib_LIBRARIES += libpthread_gcc49.a
libpthread_gcc49_a_SOURCES = pthread.c
libpthread_gcc49_a_CFLAGS = -fno-tree-loop-distribute-patterns --compiler=I386_GCC49  $(common_treegccflags)
endif

if BUILD_I386_GCC5
pkglib_LIBRARIES += libpthread_gcc5.a
libpthread_gcc5_a_SOURCES = pthread.c
libpthread_gcc5_a_CFLAGS = -fno-tree-loop-distribute-patterns --compiler=I386_GCC5  $(common_treegccflags)
endif

if BUILD_I386_GCC6
pkglib_LIBRARIES += libpthread_gcc6.a
libpthread_gcc6_a_SOURCES = pthread.c
libpthread_gcc6_a_CFLAGS = -fno-tree-loop-distribute-patterns --compiler=I386_GCC6  $(common_treegccflags)
endif

if BUILD_I386_GCC7
pkglib_LIBRARIES += libpthread_gcc7.a
libpthread_gcc7_a_SOURCES = pthread.c
libpthread_gcc7_a_CFLAGS = -fno-tree-loop-distribute-patterns --compiler=I386_GCC7  $(common_treegccflags)
endif

#do not touch the following line
 
