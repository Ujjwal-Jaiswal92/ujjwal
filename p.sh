#!/bin/bash

echo "📦 Adding all changes..."
git add .

echo "📝 Enter your commit message:"
read commitMessage

git commit -m "$commitMessage"

echo "🚀 Pushing to GitHub..."
git push origin main

echo "✅ Code pushed successfully!"
