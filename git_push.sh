#!/bin/bash

read -p "branch: " BRANCH

if [ $? != 0 ]; then
    printf '%s\n' "read failed." 
    exit 1
else
    git checkout $BRANCH
    if [ $? != 0 ]; then
        printf '%s\n' "checkout failed."
        exit 1
    fi
    git add .
fi

read -p "commit message: " CMSG
if [ $? != 0 ]; then
    printf '%s\n' "read failed."
    exit 1
else
    git commit -m "$CMSG"
fi

read -p "push?[y/n]: "  PUSH
if [ $PUSH == "y" ]; then
    git push "$BRANCH"
else
    printf '%s\n' "read failed."
    exit 1
fi
