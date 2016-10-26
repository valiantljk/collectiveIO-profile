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
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPIX_COMM_GROUP_FAILED = PMPIX_COMM_GROUP_FAILED
#pragma weak mpix_comm_group_failed__ = PMPIX_COMM_GROUP_FAILED
#pragma weak mpix_comm_group_failed_ = PMPIX_COMM_GROUP_FAILED
#pragma weak mpix_comm_group_failed = PMPIX_COMM_GROUP_FAILED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPIX_COMM_GROUP_FAILED = pmpix_comm_group_failed__
#pragma weak mpix_comm_group_failed__ = pmpix_comm_group_failed__
#pragma weak mpix_comm_group_failed_ = pmpix_comm_group_failed__
#pragma weak mpix_comm_group_failed = pmpix_comm_group_failed__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPIX_COMM_GROUP_FAILED = pmpix_comm_group_failed_
#pragma weak mpix_comm_group_failed__ = pmpix_comm_group_failed_
#pragma weak mpix_comm_group_failed_ = pmpix_comm_group_failed_
#pragma weak mpix_comm_group_failed = pmpix_comm_group_failed_
#else
#pragma weak MPIX_COMM_GROUP_FAILED = pmpix_comm_group_failed
#pragma weak mpix_comm_group_failed__ = pmpix_comm_group_failed
#pragma weak mpix_comm_group_failed_ = pmpix_comm_group_failed
#pragma weak mpix_comm_group_failed = pmpix_comm_group_failed
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPIX_COMM_GROUP_FAILED = PMPIX_COMM_GROUP_FAILED
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpix_comm_group_failed__ = pmpix_comm_group_failed__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpix_comm_group_failed = pmpix_comm_group_failed
#else
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpix_comm_group_failed_ = pmpix_comm_group_failed_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPIX_COMM_GROUP_FAILED  MPIX_COMM_GROUP_FAILED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpix_comm_group_failed__  mpix_comm_group_failed__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpix_comm_group_failed  mpix_comm_group_failed
#else
#pragma _HP_SECONDARY_DEF pmpix_comm_group_failed_  mpix_comm_group_failed_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPIX_COMM_GROUP_FAILED as PMPIX_COMM_GROUP_FAILED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpix_comm_group_failed__ as pmpix_comm_group_failed__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpix_comm_group_failed as pmpix_comm_group_failed
#else
#pragma _CRI duplicate mpix_comm_group_failed_ as pmpix_comm_group_failed_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_GROUP_FAILED")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_GROUP_FAILED")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_GROUP_FAILED")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_GROUP_FAILED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpix_comm_group_failed__ = MPIX_COMM_GROUP_FAILED
#pragma weak mpix_comm_group_failed_ = MPIX_COMM_GROUP_FAILED
#pragma weak mpix_comm_group_failed = MPIX_COMM_GROUP_FAILED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPIX_COMM_GROUP_FAILED = mpix_comm_group_failed__
#pragma weak mpix_comm_group_failed_ = mpix_comm_group_failed__
#pragma weak mpix_comm_group_failed = mpix_comm_group_failed__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPIX_COMM_GROUP_FAILED = mpix_comm_group_failed_
#pragma weak mpix_comm_group_failed__ = mpix_comm_group_failed_
#pragma weak mpix_comm_group_failed = mpix_comm_group_failed_
#else
#pragma weak MPIX_COMM_GROUP_FAILED = mpix_comm_group_failed
#pragma weak mpix_comm_group_failed__ = mpix_comm_group_failed
#pragma weak mpix_comm_group_failed_ = mpix_comm_group_failed
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_COMM_GROUP_FAILED")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_COMM_GROUP_FAILED")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_COMM_GROUP_FAILED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_group_failed__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_group_failed__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_group_failed__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_group_failed_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_group_failed_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_group_failed_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_group_failed")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_group_failed")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_group_failed")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpix_comm_group_failed__ = PMPIX_COMM_GROUP_FAILED
#pragma weak pmpix_comm_group_failed_ = PMPIX_COMM_GROUP_FAILED
#pragma weak pmpix_comm_group_failed = PMPIX_COMM_GROUP_FAILED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPIX_COMM_GROUP_FAILED = pmpix_comm_group_failed__
#pragma weak pmpix_comm_group_failed_ = pmpix_comm_group_failed__
#pragma weak pmpix_comm_group_failed = pmpix_comm_group_failed__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPIX_COMM_GROUP_FAILED = pmpix_comm_group_failed_
#pragma weak pmpix_comm_group_failed__ = pmpix_comm_group_failed_
#pragma weak pmpix_comm_group_failed = pmpix_comm_group_failed_
#else
#pragma weak PMPIX_COMM_GROUP_FAILED = pmpix_comm_group_failed
#pragma weak pmpix_comm_group_failed__ = pmpix_comm_group_failed
#pragma weak pmpix_comm_group_failed_ = pmpix_comm_group_failed
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_GROUP_FAILED")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_GROUP_FAILED")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_GROUP_FAILED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed__")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed__")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed_")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed_")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_GROUP_FAILED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_group_failed_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_group_failed")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpix_comm_group_failed_ PMPIX_COMM_GROUP_FAILED
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpix_comm_group_failed_ pmpix_comm_group_failed__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpix_comm_group_failed_ pmpix_comm_group_failed
#else
#define mpix_comm_group_failed_ pmpix_comm_group_failed_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPIX_Comm_group_failed
#define MPIX_Comm_group_failed PMPIX_Comm_group_failed 

#else

#ifdef F77_NAME_UPPER
#define mpix_comm_group_failed_ MPIX_COMM_GROUP_FAILED
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpix_comm_group_failed_ mpix_comm_group_failed__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpix_comm_group_failed_ mpix_comm_group_failed
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpix_comm_group_failed_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *ierr ){
    *ierr = MPIX_Comm_group_failed( (MPI_Comm)(*v1), v2 );
}
