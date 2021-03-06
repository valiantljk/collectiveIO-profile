C     -*- Mode: Fortran; -*-
C
C     (C) 2001 by Argonne National Laboratory.
C     See COPYRIGHT in top-level directory.
C
       subroutine mpirinitf( )
       integer mpi_status_size
       parameter (mpi_status_size=)
C      STATUS_IGNORE, STATUSES_IGNORE
       integer si(mpi_status_size), ssi(mpi_status_size,1)
C      BOTTOM, IN_PLACE, UNWEIGHTED, ERRCODES_IGNORE
       integer bt, ip, uw, ecsi(1)
C      ARGVS_NULL, ARGV_NULL
       character*1 asn(1,1), an(1)
       common /MPIFCMB5/ uw
       common /MPIFCMB9/ we
       common /MPIPRIV1/ bt, ip, si
       common /MPIPRIV2/ ssi, ecsi
       common /MPIPRIVC/ asn, an
       save /MPIFCMB5/
       save /MPIFCMB9/
       save /MPIPRIV1/, /MPIPRIV2/
       save /MPIPRIVC/
C      MPI_ARGVS_NULL 
C      (Fortran requires character data in a separate common block)
       call mpirinitc(si, ssi, bt, ip, uw, ecsi, asn, we)
       call mpirinitc2(an)
       return
       end
