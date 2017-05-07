import plotly.offline as py
from plotly.graph_objs import *
import pandas as pd
import math

my_cols=['px_est','py_est','vx_est','vy_est','px_meas','py_meas','px_gt','py_gt','vx_gt','vy_gt']
with open('../../CarND-Unscented-Kalman-Filter-Project/data/output.txt') as f:
    table_ekf_output = pd.read_table(f, sep='\t', header=None, names=my_cols, lineterminator='\n')