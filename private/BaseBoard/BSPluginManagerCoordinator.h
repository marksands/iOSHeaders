//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject
{
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;
- (id)pluginManagerForBundle:(id)arg1;
- (id)mainPluginManager;
- (void)registerPluginsFromBundle:(id)arg1;
- (void)registerPlugins;
- (id)_init;

@end

