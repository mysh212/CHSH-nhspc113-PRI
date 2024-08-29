# Author : ysh
# 2024/08/29 Thu 01:55:53
from core.general import *

for i in [j for j in ls() if j.endswith('.pdf') and j != 'Problems.pdf' and j != 'Rule.pdf']:
    print(f'ren {i} {i.replace('.pdf','').title()}.pdf')