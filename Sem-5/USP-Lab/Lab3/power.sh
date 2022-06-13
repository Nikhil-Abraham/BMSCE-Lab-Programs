#/bin/sh

echo "Enter base number: "
read base
echo "Enter power value: "
read pow
res=$base
i=2

while [ $i -le $pow ]
do
	res=$((res*base))
	i=$((i+1))
done
echo $res
