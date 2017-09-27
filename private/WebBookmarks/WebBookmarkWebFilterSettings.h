//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFUserSettings;

@interface WebBookmarkWebFilterSettings : NSObject
{
    WFUserSettings *_userSettings;
}

+ (id)sharedWebFilterSettings;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isWebFilterWhiteListOnlyModeEnabled) _Bool webFilterWhiteListOnlyModeEnabled;
@property(readonly, nonatomic, getter=isWebFilterEnabled) _Bool webFilterEnabled;
- (void)reloadSettings;
@property(readonly, nonatomic) WFUserSettings *userSettings;
- (void)dealloc;
- (id)init;

@end

