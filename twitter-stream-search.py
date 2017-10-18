from twython import Twython;
from twython import TwythonStreamer;

execfile('twitter-stream-search-keys.py');

#twitter = Twython(c_key, c_secret, a_key, a_secret);

class MyStreamer(TwythonStreamer):
	def __init__(self, c_key, c_secret, a_key, a_secret):
		TwythonStreamer.__init__(self, c_key, c_secret, a_key, a_secret);
		self.i=0;
		
	def on_success(self, data):
		if 'text' in data:
			# do something here
			self.i=self.i+1;
			print self.i,': ',data['text'];

streamer = MyStreamer(c_key, c_secret, a_key, a_secret);
streamer.statuses.filter(track="foo");

