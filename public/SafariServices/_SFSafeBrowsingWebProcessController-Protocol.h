//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSURL, _SFSecurityInfo;

@protocol _SFSafeBrowsingWebProcessController <NSObject>
- (void)safeBrowsingCheckFinishedWithSecurityInfo:(_SFSecurityInfo *)arg1 canGoBack:(_Bool)arg2 localizedStrings:(NSDictionary *)arg3;
- (void)safeBrowsingDatabaseDidUpdate;
- (void)urlPassedSafeBrowsingCheck:(NSURL *)arg1 canCache:(_Bool)arg2;
@end

