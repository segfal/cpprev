
g++ main.cpp -o main -std=c++11
# if ./main exists, delete it
if [ -f ./main ]; then
    ./main
    rm ./main
fi
