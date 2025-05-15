#!/bin/bash

echo "📦 Adding all changes (including deletions, excluding .sh files)..."

# Add all changes, including deletions, except .sh files
git add --all
git add $(git ls-files | grep -v '\.sh$')

echo "📝 Enter your commit message:"
read commitMessage

git commit -m "$commitMessage"

echo "🌐 Pulling latest changes from remote with rebase (to avoid conflicts)..."
git pull --rebase origin main

echo "🚀 Pushing to GitHub..."
git push origin main

echo "✅ Code pushed successfully!"