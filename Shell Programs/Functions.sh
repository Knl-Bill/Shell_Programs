add()
{
	sums=0
	for value in "$@"; do
		sums=$((sums+value))
	done
	return $sums
}
add 10 20 30 40 50
echo "The sum of the input is $?"

# This is using the return statement
#To return the value without the return statement, we can write this code

addnums()
{
	sums=0
	for value in "$@"; 
	do
		sums=$((sums+value))
	done
	echo $sums
}
result=$(addnums 10 20 30 40) 
echo "The sum is : "$result"."
