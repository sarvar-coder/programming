import UIKit

var greeting = "Hello, playground"

func containsNearbyDuplicate(_ nums: [Int], _ k: Int) -> Bool {
    
    if k <= 0 { return false}
    var occurencies = [Int: Int]()
    
    for i in 0..<nums.count {
        if let count = occurencies[nums[i]], count > 0 {
            return true
        }
        
        occurencies[nums[i], default: 0] += 1
        
        if i >= k {
            let startWindow = nums[i - k]
            if let _ = occurencies[startWindow] {
                occurencies[startWindow]! -= 1
                if occurencies[startWindow] == 0 { occurencies.removeValue(forKey: startWindow) }
            }
            
        }
    }
    return false
}
containsNearbyDuplicate([1,0,4,1,2,1], 2)
// [1, 2, 3, 4, 5, 6, 7, 8, 9]  k = 3  () -> 24.
func maxSubArray(_ nums: [Int], _ k: Int) -> Int {
    
    var sum = 0
    var maxSum = sum
    
    var i = k
    
    for i in 0..<nums.count {
        
        sum += nums[i]
        maxSum = max(maxSum, sum)
        if i >= k {
            sum -= nums[i - k]
        }
        
    }
    
    return maxSum
}
print(maxSubArray([1, 2, 3, 4, 5, 6, 7, 8, 9], 2))
let sth = readLine()
print(sth)
