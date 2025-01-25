#!/bin/bash

# Check if the input file name is provided
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <input_file>"
    exit 1
fi

INPUT_FILE=$1
OUTPUT_FILE="output.c"

# Read each line from the input file and process it
> $OUTPUT_FILE # Clear or create the output file
echo "const char* strings[] = {" >> $OUTPUT_FILE
while IFS= read -r line; do
    padded_line=$(printf "%-8s" "$line")
    echo "  \"$padded_line\"," >> $OUTPUT_FILE
done < "$INPUT_FILE"
echo "};" >> $OUTPUT_FILE

echo "File '$OUTPUT_FILE' has been created with the padded strings."
