-- higher order functions

main = do
      print(map (*3)[1,4,6])
      print(map (+2)[1,4,6])

--Above,map is a inbuilt function for direct calculation

--Lets make a user defined function for operations on list

mapf::(a->b)->[a]->[b]
mapf f xs=[f x | x <-xs]

main = do
      print(mapf (*3)[1,4,6])
      print(mapf (/2)[2,4,6])