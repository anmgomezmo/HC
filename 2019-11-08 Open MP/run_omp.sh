echo "Running for all threads ..."
for NTHREADS in 1 2 3 4 6 7 8 16 32; do
    echo -n "$NTHREADS  " 
    OMP_NUM_THREADS=$NTHREADS /usr/bin/time ./a.out ;
done &> fulltimes.txt

echo "Selecting elapsed time ..."
awk '{if (NR%2==1){gsub("elapsed","",$4); gsub("0:","",$4); print $1, $4}}' fulltimes.txt > times.txt

echo "Done."

TP1=$(awk '{if (NR==1) print $2}' times.txt) 

cat <<EOF > plot.gp
    set term pdf
    set out "speedup.pdf"
    plot 'times.txt' u 1:($TP1/\$2) w lp t 'speedup'
    set term pdf
    set out "efficiency.pdf"
    plot 'times.txt' u 1:($TP1/\$2/\$1) w lp t 'Parallel efficiency'
EOF
gnuplot plot.gp 
