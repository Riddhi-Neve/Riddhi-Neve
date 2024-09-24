#include "crow_all.h"
#include <iostream>
#include <fstream>
#include <ctime>

void saveTextToFile(const std::string &text, const std::string &filePath) {
	    std::ofstream outFile;
	        outFile.open(filePath, std::ios_base::app);
							         if (outFile.is_open()) {
							                
							                        std::time_t now = std::time(nullptr);
							                                char timeStr[100];
							                                        std::strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", std::localtime(&now));
							                                                
							                                                        outFile << "[" << timeStr << "] " << text << "\n";
							                                                                outFile.close();
							                                                                    } else {
							                                                                            std::cerr << "Unable to open file for writing: " << filePath << std::endl;
							                                                                                }
							                                                                                }
							    
							                                                                                int main() {
							                                                                                  
							                                                                                      crow::SimpleApp app;
							    
							                                                                                          std::string filePath = "transcriptions.txt";
							    
							                                                                                              CROW_ROUTE(app, "/zoom-webhook").methods(crow::HTTPMethod::POST)([&filePath](const crow::request& req) {
							                                                                                                      auto body = crow::json::load(req.body);
							    
							                                                                                                              if (!body) {
							                                                                                                                          return crow::response(400, "Invalid JSON");
							                                                                                                                                  }
							    
							                                                                                                                                         
							                                                                                                                                                if (body.has("event") && body["event"].s() == "meeting.transcription_received") {
							                                                                                                                                                                                                                                                                                                          std::string transcription = body["payload"]["transcript"]["text"].s();
							                                                                                                                                                                         std::cout << "Transcription received: " << transcription << std::endl;
							    
							                                                                                                                                                                                     saveTextToFile(transcription, filePath);
							    
							                                                                                                                                                                                           }
							    
							                                                                                                                                                                                                     return crow::response(200, "OK");
							                                                                                                                                                                                                         });
							    
							                                                                                                                                                                                                             app.port(5000).multithreaded().run();
							                                                                                                                                                                                                                 return 0;
							                                                                                                                                                                                                                }
							    
