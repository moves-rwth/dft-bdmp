#!flask/bin/python

import sys
import dft_lib.io.parser
import dft_lib.io.export
import dft_lib.transformer.rewriting
import json
import stormpy
import stormpy.logic
import stormpy.dft

import math
from configurations import dft


from flask import Flask, render_template, request, redirect, Response
from flask_cors import CORS, cross_origin
import random, json, urllib.request 

app = Flask(__name__)


app.config['SECRET_KEY'] = 'the quick brown fox jumps over the lazy   dog'
app.config['CORS_HEADERS'] = 'Content-Type' 'Access-Control-Allow-Origin: *'

cors = CORS(app, resources={r"/simplify": {"origins": "http://127.0.0.1:5000"},
							r"/messages": {"origins": "http://127.0.0.1:5000"}})

@app.route('/')
def output():
	return "Hello World"

@app.route('/simplify', methods = ['POST'])
@cross_origin(origin='http://127.0.0.1:5000', headers=['Content-Type', '*', 'Authorization', 'Access-Control-Allow-Origin: *'])
def simp():
	# read json + simplify + reply
	data = request.get_json(force=True)
	
	#print("data")

	dft = dft_lib.io.parser.parse_dft_json_string(data)
	print(dft)

	# Extract rule array
	rules = data['rules']

	# Clear Logger and Transformer
	dft_lib.transformer.rewriting.simpLogger.clear()
	dft_lib.transformer.rewriting.transformer.clear()


    # Set number of elements to Transformer
	dft_lib.transformer.rewriting.transformer.setNumberOfElements(dft.size_elements())

	# Split FDEPs in DFT
	if '0' in rules:
		# Remove the split FDEPs flag
		rules.sort()
		rules.pop(0)
		dft_lib.transformer.rewriting.split_fdeps(dft)

	# Simplify DFT
	dft_lib.transformer.rewriting.simplify_dft(dft, rules)
	print(dft)

	# Add finish message to logger
	endMessage = dft_lib.transformer.rewriting.Message('End', '')
	dft_lib.transformer.rewriting.simpLogger.add_message(endMessage)

	result = json.dumps(dft.json(), separators=(',',':'))


	return result

@app.route('/messages', methods = ['GET'])
@cross_origin(origin='http://127.0.0.1:5000', headers=['Access-Control-Allow-Origin: *','Content-Type', 'Authorization'])
def checkMessages():

	data = dft_lib.transformer.rewriting.simpLogger.get_messages()
	dft_lib.transformer.rewriting.simpLogger.clear()
	if data:
		return data
	else:
		return ''


@app.route('/analyze', methods = ['POST'])
@cross_origin(origin='http://127.0.0.1:5000', headers=['Content-Type', '*', 'Authorization', 'Access-Control-Allow-Origin: *'])
def analyze():
	# read json + analyze + reply
	data = request.get_json(force=True)

	# Convert to proper JSON
	dftData = json.dumps(data)

	dft = stormpy.dft.load_dft_json_string(dftData)

	formulas = stormpy.parse_properties('T=? [F \"failed\" ]')
	results = stormpy.dft.analyze_dft(dft, [formulas[0].raw_formula])
	return str(results[0])

if __name__ == '__main__':
	# run!
	app.run()