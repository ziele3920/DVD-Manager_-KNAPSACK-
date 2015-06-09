reset
set terminal png
set output "plot.png"
set style data histogram
set style histogram cluster gap 1
set style fill solid border -1
set xlabel 'Ilość wolnego miejsca[kB]'
set ylabel 'Ilość plyt[n]'
set boxwidth 0.8
set size 1,1
set yr [0:200];
set ytics 0,10,200;
p 'data.dat' u 2 title ' ', '' u 0:(0):xticlabel(1) w l title ''
