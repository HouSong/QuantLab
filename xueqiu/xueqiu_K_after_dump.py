#!/usr/bin/env python

import os.path
import time
import urllib2
import datetime
import json
import random

access_token='Hcpfh8Fn6eyQa4753mCxPs'
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
        day = datetool.strptime(item['time'][0:-11]+item['time'][-5:len(item['time'])], '%a %b %d %H:%M:%S %Y')
        to_file.write(day.strftime('%Y%m%d') + '\t' + str(item['open']) + '\t' + str(item['close']) + '\t' + str(item['high']) + '\t' + str(item['low']) + '\t' + str(item['volume']) + '\t' + str(item['chg']) + '\t' + str(item['percent']) + '\t' + str(item['turnrate']) + '\t' + str(item['ma5']) + '\t' + str(item['ma10']) + '\t' + str(item['ma20']) + '\t' + str(item['ma30']) + '\n')

def fetch_code(code_name):
    url = 'http://xueqiu.com/stock/forchartk/stocklist.json?period=1day&symbol=' + code_name + '&type=after&access_token=' + access_token
    http_content = parse_URL(url)
    if http_content is None:
        print 'Fuck'
        return
    with open('result_data/' + code_name + '_after.csv', 'w') as to_file:
        save_to_file(json.loads(http_content), to_file)

if __name__ == '__main__':
    #fetch_code('SH600104')
    list_file = open('all_list.txt')
    all_codes = []
    success = set([])
    for l in list_file:
        all_codes.append(l)
    if os.path.isfile('success_list.txt') :
        with open('success_list.txt', 'r') as success_file:
            for l in success_file:
                success.add(l.strip())

    random.shuffle(all_codes)
    with  open('success_list.txt', 'a') as success_file :
        for code in all_codes:
            if code.strip() in success:
                print code.strip() + ' was fetched before'
            else :
                print 'trying to fetch ' + code.strip()
                fetch_code(code.strip())
                print 'fetch ' + code.strip() + ' done'
                success_file.write(code.strip() + '\n')
                time.sleep(random.random()*20 + 10) 

