//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLTSectionInfoList;

@interface BLTNotificationEnabledSettingsLogger : NSObject
{
    double _lastLogTime;
    BLTSectionInfoList *_sectionInfoList;
}

+ (id)sharedNotificationEnabledSettingsLogger:(id)arg1;
@property(retain, nonatomic) BLTSectionInfoList *sectionInfoList; // @synthesize sectionInfoList=_sectionInfoList;
- (void).cxx_destruct;
- (void)_performActivity:(id)arg1;
- (void)_registerActivity;
- (void)_log;
- (id)init;

@end

