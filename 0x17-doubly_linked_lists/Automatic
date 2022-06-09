#!/bin/bash
args=("$@")
chmod +x ${args[0]}
echo "${args[0]} permission updated"
git add .
git commit -m "${args[1]} ${args[2]} ${args[3]}"
echo message ${args[1]} ${args[2]} ${args[3]} committed
`git push`
echo Pushed
