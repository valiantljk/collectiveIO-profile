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
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_WIN_FENCE = PMPI_WIN_FENCE
#pragma weak mpi_win_fence__ = PMPI_WIN_FENCE
#pragma weak mpi_win_fence_ = PMPI_WIN_FENCE
#pragma weak mpi_win_fence = PMPI_WIN_FENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_FENCE = pmpi_win_fence__
#pragma weak mpi_win_fence__ = pmpi_win_fence__
#pragma weak mpi_win_fence_ = pmpi_win_fence__
#pragma weak mpi_win_fence = pmpi_win_fence__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_FENCE = pmpi_win_fence_
#pragma weak mpi_win_fence__ = pmpi_win_fence_
#pragma weak mpi_win_fence_ = pmpi_win_fence_
#pragma weak mpi_win_fence = pmpi_win_fence_
#else
#pragma weak MPI_WIN_FENCE = pmpi_win_fence
#pragma weak mpi_win_fence__ = pmpi_win_fence
#pragma weak mpi_win_fence_ = pmpi_win_fence
#pragma weak mpi_win_fence = pmpi_win_fence
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_WIN_FENCE = PMPI_WIN_FENCE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_fence__ = pmpi_win_fence__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_fence = pmpi_win_fence
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_fence_ = pmpi_win_fence_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_WIN_FENCE  MPI_WIN_FENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_fence__  mpi_win_fence__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_fence  mpi_win_fence
#else
#pragma _HP_SECONDARY_DEF pmpi_win_fence_  mpi_win_fence_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_WIN_FENCE as PMPI_WIN_FENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_win_fence__ as pmpi_win_fence__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_win_fence as pmpi_win_fence
#else
#pragma _CRI duplicate mpi_win_fence_ as pmpi_win_fence_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FENCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FENCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FENCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FENCE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_win_fence__ = MPI_WIN_FENCE
#pragma weak mpi_win_fence_ = MPI_WIN_FENCE
#pragma weak mpi_win_fence = MPI_WIN_FENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_FENCE = mpi_win_fence__
#pragma weak mpi_win_fence_ = mpi_win_fence__
#pragma weak mpi_win_fence = mpi_win_fence__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_FENCE = mpi_win_fence_
#pragma weak mpi_win_fence__ = mpi_win_fence_
#pragma weak mpi_win_fence = mpi_win_fence_
#else
#pragma weak MPI_WIN_FENCE = mpi_win_fence
#pragma weak mpi_win_fence__ = mpi_win_fence
#pragma weak mpi_win_fence_ = mpi_win_fence
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_FENCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_FENCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_FENCE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_fence__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_fence__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_fence__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_fence_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_fence_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_fence_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_fence")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_fence")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_fence")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_win_fence__ = PMPI_WIN_FENCE
#pragma weak pmpi_win_fence_ = PMPI_WIN_FENCE
#pragma weak pmpi_win_fence = PMPI_WIN_FENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_WIN_FENCE = pmpi_win_fence__
#pragma weak pmpi_win_fence_ = pmpi_win_fence__
#pragma weak pmpi_win_fence = pmpi_win_fence__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_WIN_FENCE = pmpi_win_fence_
#pragma weak pmpi_win_fence__ = pmpi_win_fence_
#pragma weak pmpi_win_fence = pmpi_win_fence_
#else
#pragma weak PMPI_WIN_FENCE = pmpi_win_fence
#pragma weak pmpi_win_fence__ = pmpi_win_fence
#pragma weak pmpi_win_fence_ = pmpi_win_fence
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FENCE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FENCE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_FENCE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_FENCE( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_fence_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_fence")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_win_fence_ PMPI_WIN_FENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_fence_ pmpi_win_fence__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_fence_ pmpi_win_fence
#else
#define mpi_win_fence_ pmpi_win_fence_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Win_fence
#define MPI_Win_fence PMPI_Win_fence 

#else

#ifdef F77_NAME_UPPER
#define mpi_win_fence_ MPI_WIN_FENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_fence_ mpi_win_fence__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_fence_ mpi_win_fence
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_win_fence_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *ierr ){
    *ierr = MPI_Win_fence( (int)*v1, (MPI_Win)*v2 );
}
