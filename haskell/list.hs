-- lists like arrays same index
--list of int type
scores :: [Int]
scores = [17,23,32,1,5]
main =do
      -- score at 0 index
      print (scores !! 0)
      --output in same format square brack
      print(scores)
      
      -- score at head index
      print (head scores)
      -- score at last index
      print (last scores)
      -- score at tail everything except head
      print (tail scores)
      -- score at init everything except head and tail
      print (init scores)