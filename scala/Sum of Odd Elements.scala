// def f(arr:List[Int]) : Int = {
//     val oddl = arr.filter(_%2 != 0)
//     // return oddl.sum
//     return oddl.foldLeft(0) (_+_)
    
// }

def f(arr:List[Int]) : Int = arr.filter(_%2 != 0).foldLeft(0) (_+_)