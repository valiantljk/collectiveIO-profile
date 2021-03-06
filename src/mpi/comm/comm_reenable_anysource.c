/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *
 *  (C) 2008 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPIX_Comm_reenable_anysource */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPIX_Comm_reenable_anysource = PMPIX_Comm_reenable_anysource
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPIX_Comm_reenable_anysource  MPIX_Comm_reenable_anysource
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPIX_Comm_reenable_anysource as PMPIX_Comm_reenable_anysource
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPIX_Comm_reenable_anysource(MPI_Comm comm, MPI_Group *failed_group) __attribute__((weak,alias("PMPIX_Comm_reenable_anysource")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPIX_Comm_reenable_anysource
#define MPIX_Comm_reenable_anysource PMPIX_Comm_reenable_anysource

#endif

#undef FUNCNAME
#define FUNCNAME MPIX_Comm_reenable_anysource
#undef FCNAME
#define FCNAME MPIU_QUOTE(FUNCNAME)
/*@

MPIX_Comm_reenable_anysource - Re-enable the ability to post receives using MPI_ANY_SOURCE on the communicator 

Input Parameters:
. comm - Communicator (handle)

Output Parameters:
. failed_group - Group of failed processes communicator (handle)

Notes:
.N COMMNULL

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS
.N MPI_ERR_COMM
@*/
int MPIX_Comm_reenable_anysource(MPI_Comm comm, MPI_Group *failed_group)
{
    int mpi_errno = MPI_SUCCESS;
    MPID_Comm *comm_ptr = NULL;
    MPID_Group *failed_group_ptr = NULL;
    MPIDI_STATE_DECL(MPID_STATE_MPIX_COMM_REENABLE_ANYSOURCE);

    MPIR_ERRTEST_INITIALIZED_ORDIE();
    
    MPIU_THREAD_CS_ENTER(ALLFUNC,);
    MPIDI_FUNC_ENTER(MPID_STATE_MPIX_COMM_REENABLE_ANYSOURCE);

    /* Validate parameters, especially handles needing to be converted */
#   ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
	    MPIR_ERRTEST_COMM(comm, mpi_errno);
	}
        MPID_END_ERROR_CHECKS;
    }
    
#   endif /* HAVE_ERROR_CHECKING */

    /* Convert MPI object handles to object pointers */
    MPID_Comm_get_ptr( comm, comm_ptr );
    
    /* Validate parameters and objects (post conversion) */
#   ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            /* Validate comm_ptr */
            MPID_Comm_valid_ptr( comm_ptr, mpi_errno );
	    /* If comm_ptr is not valid, it will be reset to null */
            if (mpi_errno) goto fn_fail;
        }
        MPID_END_ERROR_CHECKS;
    }
#   endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ...  */
    
    mpi_errno = MPID_Comm_reenable_anysource(comm_ptr, &failed_group_ptr);
    if (mpi_errno) goto fn_fail;

    MPIU_OBJ_PUBLISH_HANDLE(*failed_group, failed_group_ptr->handle);

    /* ... end of body of routine ... */

 fn_exit:
    MPIDI_FUNC_EXIT(MPID_STATE_MPIX_COMM_REENABLE_ANYSOURCE);
    MPIU_THREAD_CS_EXIT(ALLFUNC,);
    return mpi_errno;
 fn_fail:
    /* --BEGIN ERROR HANDLING-- */
#   ifdef HAVE_ERROR_CHECKING
    {
	mpi_errno = MPIR_Err_create_code(
	    mpi_errno, MPIR_ERR_RECOVERABLE, FCNAME, __LINE__, MPI_ERR_OTHER, "**mpix_comm_reenable_anysource",
	    "**mpix_comm_reenable_anysource %C %p", comm, failed_group);
    }
#   endif
    mpi_errno = MPIR_Err_return_comm( comm_ptr, FCNAME, mpi_errno );
    goto fn_exit;
    /* --END ERROR HANDLING-- */
}
