#!/usr/bin/env python

import urllib2
import datetime
import json

access_token='Hcpfh8Fn6eyQ4753mCxPs'
datetool=datetime.datetime(2014,1,1)

def parse_URL(url):
    response = urllib2.urlopen(url)
    returned = response.read()
    if response.getcode() > 300:
        print 'Something wrong when trying to fetch', url
        print 'Content:'
        print returned
        returned = None
    response.close()
    return returned
    
def save_to_file(jsn, to_file):
    if jsn['chartlist'] is None:
        return 
    for item in jsn['chartlist'] :
        day = datetool.strptime(item['time'].replace('+0800',''), '%a %b %d %H:%M:%S %Y')
        to_file.write(day.strftime('%Y%m%d') + '\t' + str(item['open']) + '\t' + str(item['close']) + '\t' + str(item['high']) + '\t' + str(item['low']) + '\t' + str(item['volume']) + '\n')

def fetch_code(code_name):
    url = 'http://xueqiu.com/stock/forchartk/stocklist.json?period=1day&symbol=' + code_name + '&type=after&access_token=' + access_token
    http_content = parse_URL(url)
    if http_content is None:
        print 'Fuck'
        return
    with open(code_name + '_after.csv', 'w') as to_file:
        save_to_file(json.loads(http_content), to_file)

if __name__ == '__main__':
    fetch_code('SH600104')
