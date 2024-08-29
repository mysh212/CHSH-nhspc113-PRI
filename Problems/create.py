# Author : ysh
# 2024/08/28 Wed 22:12:12
import os

while True:
    try:
        os.system(f'echo.>{input().replace(' ','-')}.md')
    except:
        quit()