import facebook

graph = facebook.GraphAPI(access_token="EAABsXm7e9dEBADbdjJjf45OCPEDhq4YLez6dCdNVHKHfpOBbXzRNdW3Pj8hs27mjPvhE3iWr1nwJXnH0g1M4ikKUbch1sM4lNwosEJYZCn7HcZCdCYqkdF7s4oymjSLFq1ZASBcuZAPctNDFW1ffxfd7gsYHFsTeOMkDljOjyZCMqyHwolKHzjUZBaVSJ7YGhOlYz2TpALmLR1cchDaaPaZBZCx3wH8QYKwZD", version="2.12")
# Get the message from a post.
post = graph.get_object(id='102949754621013', fields='name')
print(post['name'])


post = graph.get_object(id='https://www.facebook.com/cocacolafrance/posts/3250455718305169?transport=cors', fields='id')
print(post['id'])