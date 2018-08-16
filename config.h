/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* date when configure was launched */
#define BUILD_TIME "Thu Aug 16 04:16:40 PDT 2018"

/* C compiler */
#define CC "mpicc (gcc)"

/* The C type of a Fortran integer */
#define CC_FORTRAN_INT int

/* C compiler */
#define CFLAGS "-g -O2"

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* compiler supports line-number lines */
#define F90_ACCEPTS_LINE_NUMBERS 1

/* Fortran compiler */
#define FC "mpif90 (gfortran)"

/* Fortran compiler */
#define FCFLAGS "-ffree-line-length-none"

/* compiler supports command line arguments */
#define FC_COMMAND_LINE_ARGUMENTS 2003

/* iargc and getarg are implicit, we have to declare them */
/* #undef FC_COMMAND_LINE_IMPLICIT */

/* iargc and getarg are defined in a include file */
/* #undef FC_COMMAND_LINE_INCLUDE */

/* iargc and getarg are intrinsic */
/* #undef FC_COMMAND_LINE_INTRINSIC */

/* iargc and getar are defined in a module */
/* #undef FC_COMMAND_LINE_MODULE */

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef FC_DUMMY_MAIN */

/* Define if F77 and FC dummy `main' functions are identical. */
/* #undef FC_DUMMY_MAIN_EQ_F77 */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#define FC_FUNC(name,NAME) name ## _

/* As FC_FUNC, but for C identifiers containing underscores. */
#define FC_FUNC_(name,NAME) name ## _

/* The size of a Fortran integer */
#define FC_INTEGER_SIZE 4

/* git commit hash */
#define GIT_COMMIT ""

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the `alphasort' function. */
#define HAVE_ALPHASORT 1

/* Defined if you have ARPACK library. */
#define HAVE_ARPACK 1

/* Defined if you have the BerkeleyGW library. */
/* #undef HAVE_BERKELEYGW */

/* Defined if you have BLACS library. */
#define HAVE_BLACS 1

/* Define if you have a BLAS library. */
#define HAVE_BLAS 1

/* compiler supports Blue Gene intrinsics */
/* #undef HAVE_BLUE_GENE */

/* compiler supports Blue Gene Q intrinsics */
/* #undef HAVE_BLUE_GENE_Q */

/* Define if the compiler provides __builtin_prefetch */
#define HAVE_BUILTIN_PREFETCH 1

/* Defined if you have the CLBLAS library. */
/* #undef HAVE_CLBLAS */

/* Defined if you have the CLFFT library. */
/* #undef HAVE_CLFFT */

/* Define to 1 if you have the `closedir' function. */
#define HAVE_CLOSEDIR 1

/* Define to 1 if you have the <CL/cl.h> header file. */
/* #undef HAVE_CL_CL_H */

/* This is defined when we link with an external ISF library. */
#define HAVE_COMP_ISF 1

/* This is defined when we link with the internal METIS library (default). */
#define HAVE_COMP_METIS 1

/* defined if cuda support is enabled */
/* #undef HAVE_CUDA */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define if ELPA is available */
/* #undef HAVE_ELPA */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Defined if you have the ETSF_IO library. */
/* #undef HAVE_ETSF_IO */

/* Fortran compiler supports the compiler_version intrinsic */
#define HAVE_FC_COMPILER_VERSION 1

/* Fortran compiler supports the sizeof intrinsic */
#define HAVE_FC_SIZEOF 1

/* Defined if you have the FEAST library. */
/* #undef HAVE_FEAST */

/* Define if FFTW3 is available */
#define HAVE_FFTW3 1

/* Define if the distributed version of FFTW3 is available. */
#define HAVE_FFTW3_MPI 1

/* Define if the threaded version of FFTW3 is available. */
#define HAVE_FFTW3_THREADS 1

/* Define if the flush function can be called from Fortran */
#define HAVE_FLUSH 1

/* compiler and hardware supports the FMA3 instructions */
/* #undef HAVE_FMA3 */

/* compiler and hardware supports the FMA4 instructions */
/* #undef HAVE_FMA4 */

/* Define if the compiler provides the loc instrinsic */
#define HAVE_FORTRAN_LOC 1

/* Define if libgd exists. */
/* #undef HAVE_GDLIB */

/* Define if libgd uses fontconfig. */
/* #undef HAVE_GD_FONTCONFIG */

/* Define if libgd uses freetype. */
/* #undef HAVE_GD_FREETYPE */

/* Define if libgd supports gif. */
/* #undef HAVE_GD_GIF */

/* Define if libgd supports jpeg. */
/* #undef HAVE_GD_JPEG */

/* Define if libgd supports png. */
/* #undef HAVE_GD_PNG */

/* Define if libgd supports xpm. */
/* #undef HAVE_GD_XPM */

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `ioctl' function. */
#define HAVE_IOCTL 1

/* Defined if you have LAPACK library. */
#define HAVE_LAPACK 1

/* Define to 1 if you have the `cublas' library (-lcublas). */
/* #undef HAVE_LIBCUBLAS */

/* Define to 1 if you have the `cuda' library (-lcuda). */
/* #undef HAVE_LIBCUDA */

/* Define to 1 if you have the `cufft' library (-lcufft). */
/* #undef HAVE_LIBCUFFT */

/* Defined if you have LIBFM library. */
/* #undef HAVE_LIBFM */

/* Defined if you have ISF library. */
/* #undef HAVE_LIBISF */

/* Define to 1 if you have the `nvrtc' library (-lnvrtc). */
/* #undef HAVE_LIBNVRTC */

/* Defined if you have the LIBXC library. */
#define HAVE_LIBXC 1

/* Defined if you have version 3 of the LIBXC library. */
/* #undef HAVE_LIBXC3 */

/* Defined if you have version 4 of the LIBXC library. */
/* #undef HAVE_LIBXC4 */

/* Defined if LIBXC library has support for hybrid meta-GGAs. */
#define HAVE_LIBXC_HYB_MGGA 1

/* compiler and hardware support the m128d type and SSE2 instructions */
#define HAVE_M128D 1

/* compiler and hardware support the m256d type and AVX instructions */
/* #undef HAVE_M256D */

/* compiler and hardware support the m512d type and AVX512 instructions */
/* #undef HAVE_M512D */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* This is defined when we should compile with METIS support (default). */
#define HAVE_METIS 1

/* Defined if you have MPI library. */
#define HAVE_MPI 1

/* Defined if you have an MPI 2 implementation */
#define HAVE_MPI2 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Defined if you have NETCDF library. */
/* #undef HAVE_NETCDF */

/* Defined if you have NFFT library. */
/* #undef HAVE_NFFT */

/* Defined if you have the NLOPT library. */
/* #undef HAVE_NLOPT */

/* defined if opencl support is enabled */
/* #undef HAVE_OPENCL */

/* Define to 1 if you have the <OpenCL/cl.h> header file. */
/* #undef HAVE_OPENCL_CL_H */

/* Define if OpenMP is enabled */
/* #undef HAVE_OPENMP */

/* Define if OpenMP SIMD is enabled */
/* #undef HAVE_OPENMP_SIMD */

/* Defined if you have the PARMETIS library. */
/* #undef HAVE_PARMETIS */

/* Defined if you have PARPACK library. */
/* #undef HAVE_PARPACK */

/* Define to 1 if you have the `perror' function. */
#define HAVE_PERROR 1

/* Defined if you have PFFT library. */
/* #undef HAVE_PFFT */

/* Defined if you have PNFFT library. */
/* #undef HAVE_PNFFT */

/* Define if POKE is available */
/* #undef HAVE_POKE */

/* Defined if you have the PSPIO library. */
/* #undef HAVE_PSPIO */

/* Define to 1 if you have the `readdir' function. */
#define HAVE_READDIR 1

/* Define to 1 if you have the `sbrk' function. */
#define HAVE_SBRK 1

/* Defined if you have SCALAPACK library. */
#define HAVE_SCALAPACK 1

/* Define to 1 if you have the `scandir' function. */
#define HAVE_SCANDIR 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Defined if you have SPARSKIT library. */
/* #undef HAVE_SPARSKIT */

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
/* #undef HAVE_STAT_EMPTY_STRING_BUG */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if you have the `strtod' function. */
#define HAVE_STRTOD 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `tcgetpgrp' function. */
#define HAVE_TCGETPGRP 1

/* Define to 1 if the system has the type `uint32_t'. */
#define HAVE_UINT32_T 1

/* Define to 1 if the system has the type `uint64_t'. */
#define HAVE_UINT64_T 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if vectorial routines are to be compiled */
#define HAVE_VEC 1

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* If set, we can call yaml.h */
#define HAVE_YAML /**/

/* compiler supports Fortran 2003 iso_c_binding */
#define ISO_C_BINDING 1

/* compiler supports long lines */
#define LONG_LINES 1

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1

/* the maximum dimension of the space */
#define MAX_DIM 3

/* have MPI Fortran header file */
#define MPI_H 1

/* have mpi module */
/* #undef MPI_MOD */

/* octopus compiled without debug mode */
/* #undef NDEBUG */

/* The architecture of this system */
#define OCT_ARCH x86_64

/* Name of package */
#define PACKAGE "octopus"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "octopus-devel@tddft.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Octopus"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Octopus 8.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "octopus"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "8.2"

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 8

/* The size of `unsigned int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INT 4

/* The size of `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 8

/* The size of `unsigned long long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG_LONG 8

/* The size of `void*', as computed by sizeof. */
#define SIZEOF_VOIDP 8

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* If the compiler supports a TLS storage class define it to that here */
#define TLS_SPECIFIER __thread

/* Version number of package */
#define VERSION "8.2"

/* Define the major version number. */
#define YAML_VERSION_MAJOR 0

/* Define the minor version number. */
#define YAML_VERSION_MINOR 1

/* Define the patch version number. */
#define YAML_VERSION_PATCH 4

/* Define the version string. */
#define YAML_VERSION_STRING "0.1.4"

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
