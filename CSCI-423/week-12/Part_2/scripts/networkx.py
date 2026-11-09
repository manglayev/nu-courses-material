import warnings
warnings.filterwarnings('ignore')

import networkx as nx
import pandas as pd
import matplotlib.pyplot as plt

# Load the CSV file
road_graph = pd.read_csv('./data/road_graph.csv', dtype=['int32', 'int32', 'float32'], nrows=1000000)

# Create an empty graph
G = nx.from_pandas_edgelist(road_graph, source='src', target='dst', edge_attr='length')
nx.betweenness_centrality(G, k=1000)


