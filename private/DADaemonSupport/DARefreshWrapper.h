//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DADaemonSupport/DATokenRegistrationDelegate-Protocol.h>

@class NSDate, NSMutableSet;
@protocol DARefreshManagerDelegate;

@interface DARefreshWrapper : NSObject <DATokenRegistrationDelegate>
{
    int _pushState;
    int _curStyle;
    int _refreshReason;
    id <DARefreshManagerDelegate> _delegate;
    NSDate *_pushRegistrationTime;
    NSMutableSet *_tokenRegistrations;
    NSMutableSet *_refreshCollections;
    long long _fetchInterval;
}

@property(nonatomic) long long fetchInterval; // @synthesize fetchInterval=_fetchInterval;
@property(retain, nonatomic) NSMutableSet *refreshCollections; // @synthesize refreshCollections=_refreshCollections;
@property(nonatomic) int refreshReason; // @synthesize refreshReason=_refreshReason;
@property(retain, nonatomic) NSMutableSet *tokenRegistrations; // @synthesize tokenRegistrations=_tokenRegistrations;
@property(nonatomic) int curStyle; // @synthesize curStyle=_curStyle;
@property(retain, nonatomic) NSDate *pushRegistrationTime; // @synthesize pushRegistrationTime=_pushRegistrationTime;
@property(nonatomic) int pushState; // @synthesize pushState=_pushState;
@property(nonatomic) __weak id <DARefreshManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)retryCollections:(id)arg1 after:(double)arg2 reason:(int)arg3;
- (void)dailyRefreshActivityFired;
- (void)_retryActivityFired;
- (void)refreshCollections:(id)arg1 withReason:(int)arg2;
- (void)performTokenRegistrationRequestsWithToken:(id)arg1 onBehalfOf:(id)arg2;
- (void)tokenRegistrationRequest:(id)arg1 finishedWithError:(id)arg2;
- (void)cancelAllTokenRegistrations;
- (id)description;
- (_Bool)isSetToSystemFetchInterval;
- (void)cancelFetchActivity;
- (void)startFetchActivityForPush;
- (void)startFetchActivityForSystemPCStyle;
- (void)startFetchActivityWithInterval:(long long)arg1;
- (id)_fetchActivityCriteriaInOnPowerMode;
- (id)_fetchActivityCriteriaWithInterval:(long long)arg1;
- (long long)XPCActivityIntervalFromSystemSetting;
- (const char *)fetchActivityIdentifier;
- (id)_stringForStyle:(int)arg1;
- (void)stopCollectionsRefresh;
- (void)startDailyRefreshActivity;
- (void)cancelDailyRefreshActivity;
- (void)cancelRetryActivity;
- (const char *)retryActivityIdentifier;
- (id)init;

@end

