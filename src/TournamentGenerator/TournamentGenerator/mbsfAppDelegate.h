//
//  mbsfAppDelegate.h
//  TournamentGenerator
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegateProtocol.h"

@class SettingsAppDataObject;


@interface mbsfAppDelegate : UIResponder <UIApplicationDelegate, AppDelegateProtocol> {
    SettingsAppDataObject * theAppDataObject;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) SettingsAppDataObject* theAppDataObject;

@end
