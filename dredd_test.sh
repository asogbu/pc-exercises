#!/bin/sh

if [[ $DEBUG == 1 ]]; then
   DREDD_CODE_SLUG="debug"
else
   DREDD_CODE_SLUG="code"
fi

DREDD_CODE_URL="https://dredd.h4x0r.space/$DREDD_CODE_SLUG/cse-30872-su24"


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
    curl -F source=@$source_path $DREDD_CODE_URL/$exercise
    echo
    echo
done