#/bin/sh

echo "Enter Number to find Febbonacci series upto"
read febb

febb=$((febb+1))
a=0
b=1
i=1

while [ $i -le $febb ]
do
	echo "\t$a\n"
	fn=$(($a+$b))
	a=$b
	b=$fn
	i=$((i+1))
done
