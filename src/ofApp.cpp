#include "ofApp.h"

void ofApp::setup(){
  //seed random number generator
  std::srand(std::time(nullptr)); // use current time as seed for random generator
  cnn.init();
  //  cnn.training = true;
}

//--------------------------------------------------------------
void ofApp::update(){
  for (int i = 0; i < 10; i++) {
    if (cnn.is_training()) {
      cnn.train();
      if (cnn.get_avg_cost() < 1) cnn.stop_training();
    }
  }
}

//--------------------------------------------------------------
/*void ofApp::keyPressed(int key){
#define OF_KEY_SPACE 32//OF dosent have it... :/
  if (key == OF_KEY_SPACE) {//refreshed (new) model
    cnn.new_data();//only first line
  }
  if (key == OF_KEY_BACKSPACE) {//computes total average cost
    //cnn.comp_avg_cost();//computes total average cost of the entire CONVOLUTIONAL NN
    cnn.output();
    //cnn.slight_push(0.1);//slight push in random dir for all the weights/biases (to kick net out of stagnation)
  }
  if (key == OF_KEY_SHIFT) {//begins the training
    cnn.training = !cnn.training;
  }
  if (key == OF_KEY_RETURN) {//new random DATA
    cnn.randomize_weights();
  }
  if(key == OF_KEY_ESC){
    OF_EXIT_APP(0);
  }
  }*/
//--------------------------------------------------------------
