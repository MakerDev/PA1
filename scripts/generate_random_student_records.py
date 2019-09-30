import sys
import random
import math
import uuid

assert len(sys.argv) == 2, "Usages: ./generate_random_student_records.py N"

N = int(sys.argv[1])

for _ in range(N):
    print(f'%0{int(math.log(N, 10))}d' % int(random.random() * N))
    print(str(uuid.uuid4()))
