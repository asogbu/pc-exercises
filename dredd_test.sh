#!/bin/sh

for source_path in $@; do
    # echo source_path: $source_path
    file_name=`basename "$source_path"`

    dir_path=`dirname "$source_path"`
    # echo dir_path: $dir_path
    exercise_path=`realpath "$dir_path/.."`
    # echo exercise_path: $exercise_path
    exercise=`basename "$exercise_path"`
    # echo exercise: $exercise

    echo "Submitting $file_name to dredd's $exercise ..." 
    curl -F source=@$source_path https://dredd.h4x0r.space/code/cse-30872-su24/$exercise
    echo
    echo
done