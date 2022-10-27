# Python implementation of the
# above approach
from heapq import heappop, heappush, heapify

# Function to find the optimum sequence
def optimum_sequence_jobs(V: list, P: float):
	N = len(V) - 1
	j = 1
	result = 0

	Queue = []

	for i in V[1:]:
		heappush(Queue, i)

	while Queue:
		top = heappop(Queue)
		V[j] = top
		print(top, end=" ")
		j += 1

	print()
	# Calculationg with decay
	for i in range(N, 0, -1):
		result += V[i] * pow((1 - P), (N - i))

	print(f"{result:.4f}")


if __name__ == "__main__":
	V = [-1, 3, 5, 4, 1, 2, 7, 6, 8, 9, 10]

	# 10% loss per day
	P = 0.10

	optimum_sequence_jobs(V, P)

	
