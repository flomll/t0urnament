//
//  mbsfFirstViewController.m
//  TournamentGenerator
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 MUBLASAFU. All rights reserved.
//

#import "mbsSettingsViewController.h"
#import "SettingsAppDataObject.h"
#import "AppDelegateProtocol.h"

@implementation mbsSettingsViewController

#pragma mark -
#pragma mark instance methods

- (SettingsAppDataObject*) theAppDataObject;
{
	id<AppDelegateProtocol> theDelegate = (id<AppDelegateProtocol>) [UIApplication sharedApplication].delegate;
	SettingsAppDataObject* theDataObject;
	theDataObject = (SettingsAppDataObject*) theDelegate.theAppDataObject;
	return theDataObject;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    SettingsAppDataObject * theDataObject = [self theAppDataObject];
    
    NSNumber * nmOfTeams = [NSNumber numberWithFloat:[_sliderTeamCounter value]];
    NSNumber * nmOfLocations = [NSNumber numberWithFloat: [_sliderLocationCounter value]];
    NSNumber * nmOfRounds = [NSNumber numberWithFloat: [_sliderRoundsCounter value]];
    
    theDataObject.teams = [nmOfTeams integerValue];
    theDataObject.locations = [nmOfLocations integerValue];
    theDataObject.rounds = [nmOfRounds integerValue];

    [_labelTeamCounter setText: [NSString stringWithFormat:@"%d",  theDataObject.teams] ];
    [_labelLocationCounter setText: [NSString stringWithFormat:@"%d",  theDataObject.locations] ];
    [_labelRoundsCounter setText: [NSString stringWithFormat:@"%d", theDataObject.rounds] ];
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
	[super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
	[super viewDidDisappear:animated];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
    } else {
        return YES;
    }
}

- (void)generateTournament: (NSInteger) nmOfTeams: (NSInteger) nmOfLocations
{
    NSLog(@"Generate tournament for %d teams on %d locations:", nmOfTeams, nmOfLocations);
    //NSMutableArray * teams = [NSMutableArray alloc];
    
    // TODO: Generate the game list with all games.
}

- (IBAction) sliderTeamCounterValueChanged:(id)sender {
    SettingsAppDataObject * theDataObject = [self theAppDataObject];
    NSNumber * nmOfTeams = [NSNumber numberWithFloat:[_sliderTeamCounter value]];
    theDataObject.teams = [nmOfTeams integerValue];
    [_labelTeamCounter setText: [NSString stringWithFormat:@"%d", theDataObject.teams] ];
}

- (IBAction) sliderLocationCounterValueChanged:(id)sender {
    SettingsAppDataObject * theDataObject = [self theAppDataObject];
    NSNumber * nmOfLocations = [NSNumber numberWithFloat: [_sliderLocationCounter value]];
    theDataObject.locations = [nmOfLocations integerValue];
    [_labelLocationCounter setText: [NSString stringWithFormat:@"%d", theDataObject.locations] ];
}

- (IBAction) sliderRoundsCounterValueChanged:(id)sender {
    SettingsAppDataObject * theDataObject = [self theAppDataObject];
    NSNumber * nmOfRounds = [NSNumber numberWithFloat: [_sliderRoundsCounter value]];
    theDataObject.rounds = [nmOfRounds integerValue];
    [_labelRoundsCounter setText: [NSString stringWithFormat:@"%d", [theDataObject rounds] ] ];    
}

- (IBAction) buttonGenerate: (id)sender {
    SettingsAppDataObject * theDataObject = [self theAppDataObject];
    [self generateTournament: theDataObject.teams: theDataObject.locations];
}

@end
