//
//  mbsfSecondViewController.m
//  TournamentGenerator
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 MUBLASAFU. All rights reserved.
//

#import "mbsTeamslistViewController.h"
#import "SettingsAppDataObject.h"
#import "AppDelegateProtocol.h"

@implementation mbsTeamslistViewController

#pragma mark -
#pragma mark instance methods

- (SettingsAppDataObject*) theAppDataObject;
{
	id<AppDelegateProtocol> theDelegate = (id<AppDelegateProtocol>) [UIApplication sharedApplication].delegate;
	SettingsAppDataObject* theDataObject;
	theDataObject = (SettingsAppDataObject*) theDelegate.theAppDataObject;
	return theDataObject;
}

//- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section { 
//    return 3; 
//}

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
    _textview.text = [NSString stringWithFormat:@"Generate tournament for %d teams on %d locations:", theDataObject.teams, theDataObject.locations];
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (void)viewWillAppear:(BOOL)animated
{
    SettingsAppDataObject * theDataObject = [self theAppDataObject];
    _textview.text = [NSString stringWithFormat:@"Generate tournament for %d teams on %d locations:", theDataObject.teams, theDataObject.locations];
    
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

@end
