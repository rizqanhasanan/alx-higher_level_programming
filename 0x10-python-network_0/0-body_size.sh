#!/bin/bash
# sends a req to a URL and displays size of response
curl -s $1 | wc -c

