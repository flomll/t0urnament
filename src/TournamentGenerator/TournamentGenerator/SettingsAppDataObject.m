//
//  ExampleAppDataObject.m
//  ViewControllerDataSharing
//
//  Created by Duncan Champney on 7/29/10.

#import "SettingsAppDataObject.h"


@implementation SettingsAppDataObject

@synthesize teams = _teams;
@synthesize locations = _locations;
@synthesize rounds = _rounds;

#pragma mark -
#pragma mark -Memory management methods

- (void)dealloc 
{
	//Release any properties declared as retain or copy.
	//self.l = nil;
}
@end
