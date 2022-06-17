echo "copy *.so"
deplist=$( ldd $1 | awk '{if (match($3,"/")){ print $3}}' )
array=(`echo $deplist | tr ' ' ' '` ) 
for var in ${array[@]}
do
  cp -L -n $var $2
done

echo "copy $1"
cp -L -n $1 $2
