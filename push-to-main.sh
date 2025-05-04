#!/bin/bash

# Check if an argument was provided
if [ $# -eq 0 ]; then
  echo "Usage: $0 \"commit message\""
  exit 1
fi


ls -al
# Store the argument as commit message
commit_message="$1"

# Run the git commands
git checkout main
git pull
git add .
git commit -m "$commit_message"
git push

