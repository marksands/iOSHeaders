//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSceneParameters.h>

@class FBSDisplayConfiguration, FBSSceneClientSettings, FBSSceneSettings;

@interface FBSMutableSceneParameters : FBSSceneParameters
{
    FBSDisplayConfiguration *_displayConfiguration;
}

- (void)setDisplay:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) FBSSceneSettings *settings; // @dynamic settings;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) FBSSceneClientSettings *clientSettings; // @dynamic clientSettings;

@end

