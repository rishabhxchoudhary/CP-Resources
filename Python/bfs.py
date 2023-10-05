# BFS

graph = {}
graph[1] = {2,3}
graph[2] = {1,4,5}
graph[3] = {1,5}

def bfs(graph, start):
    visited = []
    queue = [start]

    while queue:
        node = queue.pop(0)
        if node not in visited:
            visited.append(node)
            queue.extend(graph[node] - set(visited))

    return visited
