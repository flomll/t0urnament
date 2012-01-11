//
//  ExampleAppDataObject.h
//  ViewControllerDataSharing
//
//  Created by Duncan Champney on 7/29/10.

#import <Foundation/Foundation.h>
#import "AppDataObject.h"


@interface SettingsAppDataObject : AppDataObject 
{
    NSInteger _teams;
    NSInteger _locations;
    NSInteger _rounds;
}

@property (atomic) NSInteger	teams;
@property (atomic) NSInteger	locations;
@property (atomic) NSInteger	rounds;

@end
