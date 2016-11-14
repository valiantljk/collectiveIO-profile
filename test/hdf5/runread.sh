#!/bin/bash
nprocs=4
cbn=32
cbs=16777216
iscollective=0 #1 is collective, 0 for independent io
filename="test.1"
datasetname="temperatures"
##arguments: 
## -i: inputfilename, -o:outputfilename, -b: collective_buffersize, -n: collective_buffernodes, -k: iscollective, -v: datasetname
mpirun -n $nprocs ./h5read -f $filename -k $iscollective -v $datasetname  -n $cbn -b $cbs
