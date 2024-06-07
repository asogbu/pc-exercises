#!/bin/sh

for source_path in $@; do
    file_name=`basename "$source_path"`

    dir_path=`dirname "$source_path"`
    exercise_path=`realpath "$dir_path/.."`
    exercise=`basename "$exercise_path"`

    echo "Evaluating $exercise: $file_name ..." 
    echo TODO
    # Detect programming language

    # Get executable (compile or chmod +x)

    # For each test case:
        # result_path=$test_dir/result$test_number.txt

        # start=`date +%s%N`
        # $exe_path < $input_path > $result_path
        # end=`date +%s%N`

        # nanosec_time=$(( $end - $start ))
        # sec_time=$(( $nanosec_time * 1e-9 ))
        
        # diff $result_path $output_path
        # Check if successful, count

    # Print results

    echo
done