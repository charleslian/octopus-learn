# RPM spec file for octopus.
# This file is used to build Redhat Package Manager packages for the
# octopus.  Such packages make it easy to install and uninstall
# the library and related files from binaries or source.
#
# This spec file is for version 8.2 of octopus; the appropriate
# version numbers are automatically substituted in to octopus.spec.in
# by the configure script.  However, octopus.spec.in may need to be
# modified for future releases, if the list of installed files
# or build commands change.
#
# RPM.  To build, use the command: rpm --clean -ba octopus.spec
#
# Alternatively, you can just use 'make rpm'.
#
Name: octopus
Summary: real-space, real-time, TDDFT code
Version: 8.2
Release: 1
Provides: %{name}
License: GPL 2.0
Group: Applications/Scientific
Prefix: /usr
BuildRoot: %{_tmppath}/%{name}-%{version}-buildroot
Source: http://www.tddft.org/programs/octopus/down.php?file=%{version}/%{name}-%{version}.tar.gz
URL: http://octopus-code.org

%description
octopus is a computer package aimed at the simulation of the electron-ion 
dynamics of finite systems, both in one and three dimensions, under the 
influence of time-dependent electromagnetic fields. The electronic degrees 
of freedom are treated quantum mechanically within the time-dependent 
Kohn-Sham formalism, while the ions are handled classically. All quantities 
are expanded in a regular mesh in real space, and the simulations are 
performed in real time. Although not optimized for that purpose, the 
program is also able to obtain static properties like ground-state geometries,
or static polarizabilities. The method employed proved quite reliable and 
general, and has been successfully used to calculate linear and non-linear 
absorption spectra, harmonic spectra, laser induced fragmentation, etc. 
of a variety of systems, from small clusters to medium sized quantum dots.

%prep
rm -rf $RPM_BUILD_ROOT
%setup -q

%build
%configure \
  FC="mpif90" \
  FCFLAGS="-ffree-line-length-none" \
  CFLAGS="-g -O2" \
  CPPFLAGS="" \
  LDFLAGS="" \
  LIBS_BLAS="-lblas" \
  LIBS_LAPACK=" -llapack" \
  LIBS_FFT="@LIBS_FFT@" \
  GSL_CFLAGS="-I/usr/include" \
  GSL_CONFIG="/usr/bin/gsl-config" \
  GSL_LIBS="-L/usr/lib/x86_64-linux-gnu -lgsl -lgslcblas -lm" \
  --with-sparskit="" \
  --with-arpack=" -larpack" \
  --with-netcdf="" \
  --enable-mpi

make

make install DESTDIR=${RPM_BUILD_ROOT}

%clean
rm -rf ${RPM_BUILD_ROOT}

%files
%defattr(-,root,root,0755)
%doc README NEWS COPYING AUTHORS
%{_bindir}/*
%{_datadir}/octopus/*
%{_mandir}/man1/*
