dataFolder=$1
dataNum=$2
pedeNum=$3
dataFile=../data/runData/${dataFolder}/xbeam_${dataNum}.pd1
pedeFile=../data/pedeData/xpede_${pedeNum}.txt
cppPath=../topmetal1X8


ich=$4
iframe=$5
upLimit=$6
lowLimit=$7

root -L  -l -q  "${cppPath}/pd1_analysis_test.cpp++(\"${dataFile}\",\"${pedeFile}\",${ich},${iframe},${upLimit},${lowLimit})" 
