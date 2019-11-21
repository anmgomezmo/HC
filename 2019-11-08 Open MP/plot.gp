    set term pdf
    set out "speedup.pdf"
    plot 'times.txt' u 1:(06.53/$2) w lp t 'speedup'
    set term pdf
    set out "efficiency.pdf"
    plot 'times.txt' u 1:(06.53/$2/$1) w lp t 'Parallel efficiency'
