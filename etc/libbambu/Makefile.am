#this file is libbambu/Makefile.am
SUBDIRS = libm softfloat soft-fp pthread
DIST_SUBDIRS = libm softfloat soft-fp pthread
EXTRA_DIST= COPYING.LIB README_PANDA.txt bambu_macros.h
common_libbambu_src = memcmp.c memcpy.c memmove.c memset.c memmgr.c puts.c byteswap.c read.c write.c assert.c\
                      string/stpcpy.c string/stpncpy.c\
                      string/strcasecmp.c string/strcasestr.c string/strcat.c string/strchr.c string/strchrnul.c\
                      string/strcmp.c string/strcpy.c string/strcspn.c string/strdup.c string/strlen.c string/strncasecmp.c\
                      string/strncat.c string/strncmp.c string/strncpy.c string/strndup.c string/strnlen.c string/strpbrk.c\
                      string/strrchr.c string/strsep.c string/strspn.c string/strstr.c string/strtok.c\
                      string/bzero.c string/bcopy.c string/mempcpy.c string/memchr.c string/memrchr.c string/rawmemchr.c

METASOURCES = AUTO
CC=../$(top_builddir)/src/tree-panda-gcc
CFLAGS=
pkglib_LIBRARIES =
common_treegccflags = --output-temporary-directory=/tmp -iplugindir=$(top_builddir)/gcc_plugin
common_cflags=-O3 -nostdlib  $(common_treegccflags) $(BOOST_CPPFLAGS)

if BUILD_I386_GCC45
pkglib_LIBRARIES += libbambu_gcc45.a
libbambu_gcc45_a_SOURCES = $(common_libbambu_src)
libbambu_gcc45_a_CFLAGS =$(common_cflags) --compiler=I386_GCC45 
libbambu_gcc45_a_AR =../$(top_builddir)/src/tree-panda-gcc $(common_treegccflags)--compiler=I386_GCC45 -C
endif

if BUILD_I386_GCC46
pkglib_LIBRARIES += libbambu_gcc46.a
libbambu_gcc46_a_SOURCES = $(common_libbambu_src)
libbambu_gcc46_a_CFLAGS =$(common_cflags) --compiler=I386_GCC46 
libbambu_gcc46_a_AR =../$(top_builddir)/src/tree-panda-gcc $(common_treegccflags)--compiler=I386_GCC46 -C
endif

if BUILD_I386_GCC47
pkglib_LIBRARIES += libbambu_gcc47.a
libbambu_gcc47_a_SOURCES = $(common_libbambu_src)
libbambu_gcc47_a_CFLAGS =$(common_cflags) --compiler=I386_GCC47 
libbambu_gcc47_a_AR =../$(top_builddir)/src/tree-panda-gcc $(common_treegccflags)--compiler=I386_GCC47 -C
endif

if BUILD_I386_GCC48
pkglib_LIBRARIES += libbambu_gcc48.a
libbambu_gcc48_a_SOURCES = $(common_libbambu_src)
libbambu_gcc48_a_CFLAGS =$(common_cflags) -fno-tree-loop-distribute-patterns --compiler=I386_GCC48 
libbambu_gcc48_a_AR =../$(top_builddir)/src/tree-panda-gcc $(common_treegccflags)--compiler=I386_GCC48 -C
endif

if BUILD_I386_GCC49
pkglib_LIBRARIES += libbambu_gcc49.a
libbambu_gcc49_a_SOURCES = $(common_libbambu_src)
libbambu_gcc49_a_CFLAGS =$(common_cflags) -fno-tree-loop-distribute-patterns --compiler=I386_GCC49 
libbambu_gcc49_a_AR =../$(top_builddir)/src/tree-panda-gcc $(common_treegccflags)--compiler=I386_GCC49 -C
endif

if BUILD_I386_GCC5
pkglib_LIBRARIES += libbambu_gcc5.a
libbambu_gcc5_a_SOURCES =$(common_libbambu_src)
libbambu_gcc5_a_CFLAGS =$(common_cflags) -fno-tree-loop-distribute-patterns --compiler=I386_GCC5 
libbambu_gcc5_a_AR =../$(top_builddir)/src/tree-panda-gcc $(common_treegccflags)--compiler=I386_GCC5 -C
endif

if BUILD_I386_GCC6
pkglib_LIBRARIES += libbambu_gcc6.a
libbambu_gcc6_a_SOURCES = $(common_libbambu_src)
libbambu_gcc6_a_CFLAGS =$(common_cflags) -fno-tree-loop-distribute-patterns --compiler=I386_GCC6 
libbambu_gcc6_a_AR =../$(top_builddir)/src/tree-panda-gcc $(common_treegccflags)--compiler=I386_GCC6 -C
endif

if BUILD_I386_GCC7
pkglib_LIBRARIES += libbambu_gcc7.a
libbambu_gcc7_a_SOURCES = $(common_libbambu_src)
libbambu_gcc7_a_CFLAGS =$(common_cflags) -fno-tree-loop-distribute-patterns --compiler=I386_GCC7 
libbambu_gcc7_a_AR =../$(top_builddir)/src/tree-panda-gcc $(common_treegccflags)--compiler=I386_GCC7 -C
endif

#do not touch the following line
 

