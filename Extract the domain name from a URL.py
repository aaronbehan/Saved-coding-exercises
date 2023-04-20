# https://www.codewars.com/kata/514a024011ea4fb54200004b
# Write a function that when given a URL as a string, parses out just the domain name and returns it as a string. 


def domain_name(url):
    
    if url[:4] == "http":
        url = url.rsplit("//")
        if ":" in url[0]:  # IN CASE HTTP HAPPENS TO BE AT BEGINNING OF ACTUAL DOMAIN NAME
            url.pop(0)
        url = url[0]
    
    if url[:4] == "www.":
        url = url.rsplit("www.")
        url.pop(0)
        url = url[0]
    
    # DETERMINING LENGTH OF DOMAIN NAME IN ORDER TO SPLICE AT THE "." CHARACTER
    for x in range(len(url)):
        if url[x] == ".":
            return url[:x]