/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_SSEND_INIT = PMPI_SSEND_INIT
#pragma weak mpi_ssend_init__ = PMPI_SSEND_INIT
#pragma weak mpi_ssend_init_ = PMPI_SSEND_INIT
#pragma weak mpi_ssend_init = PMPI_SSEND_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_SSEND_INIT = pmpi_ssend_init__
#pragma weak mpi_ssend_init__ = pmpi_ssend_init__
#pragma weak mpi_ssend_init_ = pmpi_ssend_init__
#pragma weak mpi_ssend_init = pmpi_ssend_init__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_SSEND_INIT = pmpi_ssend_init_
#pragma weak mpi_ssend_init__ = pmpi_ssend_init_
#pragma weak mpi_ssend_init_ = pmpi_ssend_init_
#pragma weak mpi_ssend_init = pmpi_ssend_init_
#else
#pragma weak MPI_SSEND_INIT = pmpi_ssend_init
#pragma weak mpi_ssend_init__ = pmpi_ssend_init
#pragma weak mpi_ssend_init_ = pmpi_ssend_init
#pragma weak mpi_ssend_init = pmpi_ssend_init
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_SSEND_INIT = PMPI_SSEND_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ssend_init__ = pmpi_ssend_init__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ssend_init = pmpi_ssend_init
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ssend_init_ = pmpi_ssend_init_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_SSEND_INIT  MPI_SSEND_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ssend_init__  mpi_ssend_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ssend_init  mpi_ssend_init
#else
#pragma _HP_SECONDARY_DEF pmpi_ssend_init_  mpi_ssend_init_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_SSEND_INIT as PMPI_SSEND_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_ssend_init__ as pmpi_ssend_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_ssend_init as pmpi_ssend_init
#else
#pragma _CRI duplicate mpi_ssend_init_ as pmpi_ssend_init_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SSEND_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SSEND_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SSEND_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SSEND_INIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_ssend_init__ = MPI_SSEND_INIT
#pragma weak mpi_ssend_init_ = MPI_SSEND_INIT
#pragma weak mpi_ssend_init = MPI_SSEND_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_SSEND_INIT = mpi_ssend_init__
#pragma weak mpi_ssend_init_ = mpi_ssend_init__
#pragma weak mpi_ssend_init = mpi_ssend_init__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_SSEND_INIT = mpi_ssend_init_
#pragma weak mpi_ssend_init__ = mpi_ssend_init_
#pragma weak mpi_ssend_init = mpi_ssend_init_
#else
#pragma weak MPI_SSEND_INIT = mpi_ssend_init
#pragma weak mpi_ssend_init__ = mpi_ssend_init
#pragma weak mpi_ssend_init_ = mpi_ssend_init
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_SSEND_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_SSEND_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_SSEND_INIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ssend_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ssend_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ssend_init__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ssend_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ssend_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ssend_init_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ssend_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ssend_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ssend_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_ssend_init__ = PMPI_SSEND_INIT
#pragma weak pmpi_ssend_init_ = PMPI_SSEND_INIT
#pragma weak pmpi_ssend_init = PMPI_SSEND_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_SSEND_INIT = pmpi_ssend_init__
#pragma weak pmpi_ssend_init_ = pmpi_ssend_init__
#pragma weak pmpi_ssend_init = pmpi_ssend_init__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_SSEND_INIT = pmpi_ssend_init_
#pragma weak pmpi_ssend_init__ = pmpi_ssend_init_
#pragma weak pmpi_ssend_init = pmpi_ssend_init_
#else
#pragma weak PMPI_SSEND_INIT = pmpi_ssend_init
#pragma weak pmpi_ssend_init__ = pmpi_ssend_init
#pragma weak pmpi_ssend_init_ = pmpi_ssend_init
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SSEND_INIT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SSEND_INIT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SSEND_INIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_SSEND_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ssend_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ssend_init")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_ssend_init_ PMPI_SSEND_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ssend_init_ pmpi_ssend_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ssend_init_ pmpi_ssend_init
#else
#define mpi_ssend_init_ pmpi_ssend_init_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Ssend_init
#define MPI_Ssend_init PMPI_Ssend_init 

#else

#ifdef F77_NAME_UPPER
#define mpi_ssend_init_ MPI_SSEND_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ssend_init_ mpi_ssend_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ssend_init_ mpi_ssend_init
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_ssend_init_ ( void*v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *ierr ){
    *ierr = MPI_Ssend_init( v1, (int)*v2, (MPI_Datatype)(*v3), (int)*v4, (int)*v5, (MPI_Comm)(*v6), (MPI_Request *)(v7) );
}
