//
//  mbsfFirstViewController.h
//  TournamentGenerator
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 MUBLASAFU. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface mbsSettingsViewController : UIViewController {
    IBOutlet UILabel * _labelTeamCounter;
    IBOutlet UILabel * _labelLocationCounter;
    IBOutlet UILabel * _labelRoundsCounter;
    IBOutlet UISlider * _sliderTeamCounter;
    IBOutlet UISlider * _sliderLocationCounter;
    IBOutlet UISlider * _sliderRoundsCounter;
    IBOutlet UIButton * _buttonGenerate;
    IBOutlet UISwitch * _switchTeamLists;
    IBOutlet UISwitch * _switchLocationLists;
}

- (void)generateTournament: (NSInteger) nmOfTeams: (NSInteger) nmOfLocations;

- (IBAction) sliderTeamCounterValueChanged:(id)sender;

- (IBAction) sliderLocationCounterValueChanged:(id)sender;

- (IBAction) sliderRoundsCounterValueChanged:(id)sender;

- (IBAction) buttonGenerate: (id)sender;

@end
