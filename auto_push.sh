if [[ -n $(git status -s) ]]; then
  git add .
  git commit -m "auto commit: $(date)"
  git push
else
  echo "No changes"
fi