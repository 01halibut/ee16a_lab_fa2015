from mic import SoundRecorder
try:
	mic = SoundRecorder()
	mic.open_stream()
except OSError as e:
	if (e.args == ('Invalid number of channels', -9998)):
		print("Honorable Sir/Madam, please insert your microphone into the appropriate jack on the front of your computational engine.")
	else:
		raise