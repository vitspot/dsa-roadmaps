def maxSubArraySum(arr,len):
	
	max_sum_so_far = arr[0]
	max_ending_here = 0
	
	for i in range(0, size):
		max_ending_here = max_ending_here + a[i]
		if max_ending_here < 0:
			max_ending_here = 0
		
		# Do not compare for all elements. Compare only
		# when max_ending_here > 0
		elif (max_sum_so_far < max_ending_here):
			max_sum_so_far = max_ending_here
			
	return max_sum_so_far
