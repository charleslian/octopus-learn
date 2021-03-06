## Copyright (C) 2002 M. Marques, A. Castro, A. Rubio, G. Bertsch
##
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2, or (at your option)
## any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
## 02110-1301, USA.
##

# ---------------------------------------------------------------
# Include paths.
# ---------------------------------------------------------------

FCFLAGS_MODS = \
	@F90_MODULE_FLAG@$(top_builddir)/src/basic   	 \
	@F90_MODULE_FLAG@$(top_builddir)/src/math    	 \
	@F90_MODULE_FLAG@$(top_builddir)/src/species 	 \
	@F90_MODULE_FLAG@$(top_builddir)/src/ions 	 \
	@F90_MODULE_FLAG@$(top_builddir)/src/grid    	 \
	@F90_MODULE_FLAG@$(top_builddir)/src/poisson 	 \
	@F90_MODULE_FLAG@$(top_builddir)/src/frozen      \
        @F90_MODULE_FLAG@$(top_builddir)/src/basis_set   \
	@F90_MODULE_FLAG@$(top_builddir)/src/states  	 \
	@F90_MODULE_FLAG@$(top_builddir)/src/system   	 \
	@F90_MODULE_FLAG@$(top_builddir)/src/hamiltonian \
	@F90_MODULE_FLAG@$(top_builddir)/src/scf     	 \
	@F90_MODULE_FLAG@$(top_builddir)/src/td          \
	@F90_MODULE_FLAG@$(top_builddir)/src/opt_control \
	@F90_MODULE_FLAG@$(top_builddir)/src/sternheimer         \
	@F90_MODULE_FLAG@$(top_builddir)/external_libs/bpdn      \
	@F90_MODULE_FLAG@$(top_builddir)/external_libs/dftd3     \
	@F90_MODULE_FLAG@$(top_builddir)/external_libs/spglib-1.9.9/src/

AM_CPPFLAGS = \
	-I$(top_srcdir)/src/include   \
	-I$(top_builddir)/src/include \
        -I$(top_srcdir)/external_libs/spglib-1.9.9/src \
	-I$(top_srcdir)/liboct_parser \
        $(GSL_CFLAGS) $(GD_CFLAGS) \
	@METIS_CFLAGS@ @PARMETIS_CFLAGS@ @CFLAGS_NFFT@ @CFLAGS_FFTW@ @CFLAGS_CUDA@ \
	-DSHARE_DIR='"$(pkgdatadir)"'

AM_CCASFLAGS = \
	-I$(top_builddir)/

AM_CXXFLAGS = -I$(top_srcdir)/external_libs/rapidxml

# ---------------------------------------------------------------
# Define libraries here.
# ---------------------------------------------------------------

octopus_LIBS = \
	$(top_builddir)/src/sternheimer/libsternheimer.a \
	$(top_builddir)/src/opt_control/libopt_control.a \
	$(top_builddir)/src/td/libtd.a                   \
	$(top_builddir)/src/scf/libscf.a                 \
	$(top_builddir)/src/system/libsystem.a           \
	$(top_builddir)/src/hamiltonian/libhamiltonian.a \
        $(top_builddir)/src/basis_set/libbasis_set.a     \
	$(top_builddir)/src/states/libstates.a           \
	$(top_builddir)/src/frozen/libfrozen.a           \
	$(top_builddir)/src/poisson/libpoisson.a         \
	$(top_builddir)/src/grid/libgrid.a               \
	$(top_builddir)/src/ions/libions.a               \
	$(top_builddir)/src/species/libspecies.a         \
	$(top_builddir)/src/math/libmath.a               \
	$(top_builddir)/src/basic/libbasic.a

scalapack_LIBS = @LIBS_ELPA@ @LIBS_SCALAPACK@ @LIBS_BLACS@

core_LIBS = \
	@LIBS_FFTW@  @LIBS_LAPACK@ @LIBS_BLAS@                     \
	$(top_builddir)/liboct_parser/liboct_parser.a \
	@GSL_LIBS@ @LIBS_LIBXC@ @FCEXTRALIBS@

external_LIBS = \
	$(top_builddir)/external_libs/qshep/libqshep.a                  \
	$(top_builddir)/external_libs/spglib-1.9.9/src/libsymspg.a      \
	$(top_builddir)/external_libs/bpdn/libbpdn.a                    \
	$(top_builddir)/external_libs/dftd3/libdftd3.a                  \
	$(top_builddir)/external_libs/yaml-0.1.4/src/libyaml.a
# we should not have libyaml here if we used an external one...

FCFLAGS_MODS += @FCFLAGS_LIBXC@ @FCFLAGS_PSPIO@ @FCFLAGS_ISF@ @FCFLAGS_FFTW@ @FCFLAGS_PFFT@ @FCFLAGS_PNFFT@ @FCFLAGS_NETCDF@ @FCFLAGS_ETSF_IO@ @FCFLAGS_BERKELEYGW@ @FCFLAGS_NLOPT@ @FCFLAGS_LIBFM@ @FCFLAGS_ELPA@ @FCFLAGS_POKE@

if COMPILE_OPENCL
  external_LIBS += $(top_builddir)/external_libs/fortrancl/libfortrancl.a @LIBS_CLBLAS@ @LIBS_CLFFT@ @CL_LIBS@
  FCFLAGS_MODS += @F90_MODULE_FLAG@$(top_builddir)/external_libs/fortrancl
endif

if COMPILE_METIS
  external_LIBS += $(top_builddir)/external_libs/metis-5.1/libmetis/libmetis.a
  external_LIBS += $(top_builddir)/external_libs/metis-5.1/GKlib/libgk.a
  AM_CPPFLAGS += -I$(top_srcdir)/external_libs/metis-5.1/include/
endif

# These must be arranged so if LIB1 depends on LIB2, LIB1 must occur before LIB2.
# e.g. ETSF_IO depends on netCDF, ISF depends on LAPACK
outside_LIBS = @LIBS_PSPIO@ @LIBS_POKE@ @LIBS_ISF@ @LIBS_NFFT@ @LIBS_PNFFT@ @LIBS_PFFT@ \
  @LIBS_SPARSKIT@ @LIBS_ETSF_IO@ @LIBS_NETCDF@ @LIBS_LIBFM@ \
  @LIBS_BERKELEYGW@ @LIBS_NLOPT@ @LIBS_PARPACK@ @LIBS_ARPACK@ @GD_LIBS@ \
  @LIBS_PARMETIS@ @LIBS_METIS@ @LIBS_FEAST@ @LIBS_CUDA@ @LIBS_MPI@

other_LIBS = $(external_LIBS) $(scalapack_LIBS) $(outside_LIBS) $(core_LIBS) @CXXLIBS@
all_LIBS = $(octopus_LIBS) $(other_LIBS)

# ---------------------------------------------------------------
# How to compile F90 files.
# ---------------------------------------------------------------

SUFFIXES = _oct.f90 .F90 .o

# Compilation is a two-step process: first we preprocess F90 files
# to generate _oct.f90 files. Then, we compile this _oct.f90 into
# an object file and delete the intermediate file.
.F90.o:
	@FCCPP@ @CPPFLAGS@ $(AM_CPPFLAGS) -I. $< > $*_oct.f90
	$(top_srcdir)/build/preprocess.pl $*_oct.f90 \
	  "@DEBUG@" "@F90_ACCEPTS_LINE_NUMBERS@" "@F90_FORALL@"
	@FC@ @FCFLAGS@ $(FCFLAGS_MODS) -c @FCFLAGS_f90@ -o $@ $*_oct.f90
	@rm -f $*_oct.f90

# This rule is basically to create a _oct.f90 file by hand for
# debugging purposes. It is identical to the first part of
# the .F90.o rule.
.F90_oct.f90:
	@FCCPP@ @CPPFLAGS@ $(AM_CPPFLAGS) -I. $< > $*_oct.f90
	$(top_srcdir)/build/preprocess.pl $*_oct.f90 \
	  "@DEBUG@" "@F90_ACCEPTS_LINE_NUMBERS@" "@F90_FORALL@"


# ---------------------------------------------------------------
# Miscellaneous.
# ---------------------------------------------------------------

# ctags.
CTAGS = ctags-exuberant -e

# Cleaning.
CLEANFILES = *~ *.bak *.mod *_oct.f90

# Local Variables:
# mode: Makefile
# coding: utf-8
# End:
