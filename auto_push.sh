if [[ -n $(git status -s) ]]; then
  git add .
  git commit -m "auto commit: date +%d"
  git push
else
  echo "No changes"
fi