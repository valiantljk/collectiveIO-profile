#!/bin/bash
nprocs=4
cbn=32
cbs=16777216
iscollective=1
dimx=2176
dimy=3000
filename="test.1"
datasetname="temperatures"

mpirun -n $nprocs ./h5write -f $filename -v $datasetname -b $cbs -n $cbn -k $iscollective -x $dimx -y $dimy 

