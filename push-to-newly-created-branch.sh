#!/bin/bash

# Check if two arguments were provided
if [ $# -ne 2 ]; then
  echo "Usage: $0 <branch-name> \"commit message\""
  exit 1
fi

ls -al
# Store arguments
branch_name="$1"
commit_message="$2"

# Run the git commands
git checkout -b "$branch_name"
git pull origin main
git add .
git commit -m "$commit_message"
git push --set-upstream origin "$branch_name"

