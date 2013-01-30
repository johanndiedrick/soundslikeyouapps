//
//  ViewController.h
//  audioRecorder
//
//  Created by Johann Diedrick on 1/30/13.
//  Copyright (c) 2013 Johann Diedrick. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController
    <AVAudioRecorderDelegate, AVAudioPlayerDelegate>

//set up instances of AVAudioRecorder, AVAudioPlayer, and UI buttons for play, record and stop, set up IBOutlets for play, record and stop


@property (strong, nonatomic) AVAudioRecorder *audioRecorder;
@property (strong, nonatomic) AVAudioPlayer *audioPlayer;
@property (strong, nonatomic) IBOutlet UIButton *playButton;
@property (strong, nonatomic) IBOutlet UIButton *recordButton;
@property (strong, nonatomic) IBOutlet UIButton *stopButton;
    

//setup IBActions for record, play and stop
-(IBAction) recordAudio:(id)sender;
-(IBAction) playAudio:(id)sender;
-(IBAction) stop:(id)sender;

@end
