import scala.collection.mutable.ListBuffer

def f(n:Int, arr:List[Int]) : List[Int] = {
    // var ans = new ListBuffer[Int]()
    // for (x <- arr; rep <- 1 to n){
    //     ans += x
    // }
    // return ans
    
    // arr.flatMap(e => List.fill(n)(e))
    val ans = arr.flatMap(e => List.fill(n)(e))
    // println(ans)
    return ans

}