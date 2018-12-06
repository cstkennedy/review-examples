#! /bin/bash

# Thomas Kennedy
# Summer 2014
# Less Lazy--but still lazy Testing script

test_dir="tests"
src_dir="source"
prog="arithmetic"

# Change to source directory
#pushd $src_dir

# Copy java files
#cp $test_dir/*.java . 

for i in $test_dir/*.dat
do
    
    test=`basename $i`

    model=$test_dir/`basename $i .dat`.out    
    result=`basename $test .dat`.actual

    echo "--Running $test" 

    cp $i .
    chmod u+x $test
    $src_dir/$prog < $i > $result
    sdiff $model $result
    rm $test $result

    echo
done

# Cleanup test helper files


#Return to asst5 base directory
#popd