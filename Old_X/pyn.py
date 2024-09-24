from flask 
import Flask, request
import json

app = Flask(__name__)

# Define the file path where the transcriptions will be stored
FILE_PATH = "transcriptions.txt"

@app.route('/zoom-webhook', methods=['POST'])
def zoom_webhook():
        data = request.json
            # Check for transcription data in the incoming event
                if 'event' in data and data['event'] == 'meeting.transcription_received':
                            transcription = data['payload']['transcript']['text']
                                    print(f"Transcription received: {transcription}")
                                            
                                                    # Write the transcription to a file
                                                            save_text_to_file(transcription, FILE_PATH)
                                                                    
                                                                            # Call function to convert text to speech
                                                                                    text_to_speech(transcription)
                                                                                            
                                                                                                return "OK", 200

                                                                                            def save_text_to_file(text, file_path):
                                                                                                    """Append text to a file."""
                                                                                                        with open(file_path, "a") as file:
                                                                                                                    file.write(text + "\n")  # Add a newline for each new transcription

                                                                                                                    def text_to_speech(text):
                                                                                                                            # Initialize TTS engine
                                                                                                                                import pyttsx3
                                                                                                                                    engine = pyttsx3.init()
                                                                                                                                        engine.say(text)
                                                                                                                                            engine.runAndWait()

                                                                                                                                            if __name__ == "__main__":
                                                                                                                                                    app.run(port=5000)
                                                                                                                                                    from flask import Flask, request
                                                                                                                                                    import json

                                                                                                                                                    app = Flask(__name__)

                                                                                                                                                    # Define the file path where the transcriptions will be stored
                                                                                                                                                    FILE_PATH = "transcriptions.txt"

                                                                                                                                                    @app.route('/zoom-webhook', methods=['POST'])
                                                                                                                                                    def zoom_webhook():
                                                                                                                                                            data = request.json
                                                                                                                                                                # Check for transcription data in the incoming event
                                                                                                                                                                    if 'event' in data and data['event'] == 'meeting.transcription_received':
                                                                                                                                                                                transcription = data['payload']['transcript']['text']
                                                                                                                                                                                        print(f"Transcription received: {transcription}")
                                                                                                                                                                                                
                                                                                                                                                                                                        # Write the transcription to a file
                                                                                                                                                                                                                save_text_to_file(transcription, FILE_PATH)
                                                                                                                                                                                                                        
                                                                                                                                                                                                                                # Call function to convert text to speech
                                                                                                                                                                                                                                        text_to_speech(transcription)
                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                    return "OK", 200

                                                                                                                                                                                                                                                def save_text_to_file(text, file_path):
                                                                                                                                                                                                                                                        """Append text to a file."""
                                                                                                                                                                                                                                                            with open(file_path, "a") as file:
                                                                                                                                                                                                                                                                        file.write(text + "\n")  # Add a newline for each new transcription

                                                                                                                                                                                                                                                                        def text_to_speech(text):
                                                                                                                                                                                                                                                                                # Initialize TTS engine
                                                                                                                                                                                                                                                                                    import pyttsx3
                                                                                                                                                                                                                                                                                        engine = pyttsx3.init()
                                                                                                                                                                                                                                                                                            engine.say(text)
                                                                                                                                                                                                                                                                                                engine.runAndWait()

                                                                                                                                                                                                                                                                                                if __name__ == "__main__":
                                                                                                                                                                                                                                                                                                        app.run(port=5000)

