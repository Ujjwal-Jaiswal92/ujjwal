#!/bin/bash

shopt -s nullglob

while true; do
    cpp_files=(*.cpp)
    
    if [ ${#cpp_files[@]} -eq 0 ]; then
        echo "⚠️ No .cpp files found in this directory."
        exit 1
    fi

    echo ""
    echo "🧠 What would you like to do?"
    echo "----------------------------------"
    echo "1. Run a specific C++ file"
    echo "2. Run all C++ files"
    echo "3. Exit"
    echo "----------------------------------"
    read -p "🎯 Enter your choice (1/2/3): " option

    case $option in
        1)
            echo ""
            echo "📜 Available C++ files:"
            for i in "${!cpp_files[@]}"; do
                echo "$((i+1)). ${cpp_files[$i]}"
            done
            echo "----------------------------------"
            read -p "🔍 Enter the number of the file to run: " choice
            index=$((choice - 1))

            if [[ $index -ge 0 && $index -lt ${#cpp_files[@]} ]]; then
                file="${cpp_files[$index]}"
                exe="${file%.cpp}"
                echo "🔧 Compiling: $file → $exe"

                if g++ "$file" -o "$exe"; then
                    echo "🚀 Running: $exe"
                    echo "----------------------------------"
                    ./"$exe"
                    echo "✅ Done: $exe"
                    rm "$exe"
                    echo "🧹 Cleaned: Deleted $exe"
                else
                    echo "❌ Compilation failed for: $file"
                fi
            else
                echo "⚠️ Invalid selection."
            fi
            ;;

        2)
            echo ""
            echo "🛠️ Compiling and running all C++ files..."
            echo "----------------------------------"
            for file in "${cpp_files[@]}"; do
                exe="${file%.cpp}"
                echo "🔧 Compiling: $file → $exe"

                if g++ "$file" -o "$exe"; then
                    echo "🚀 Running: $exe"
                    echo "----------------------------------"
                    ./"$exe"
                    echo "✅ Done: $exe"
                    rm "$exe"
                    echo "🧹 Cleaned: Deleted $exe"
                else
                    echo "❌ Compilation failed for: $file"
                fi
                echo "----------------------------------"
            done
            ;;

        3)
            echo "🌼 May your code compile and your mind be still. Goodbye!"
            exit 0
            ;;

        *)
            echo "⚠️ Invalid option. Please choose 1, 2, or 3."
            ;;
    esac
done
