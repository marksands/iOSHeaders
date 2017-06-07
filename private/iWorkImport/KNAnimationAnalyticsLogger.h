//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class KNPlaybackSession;

__attribute__((visibility("hidden")))
@interface KNAnimationAnalyticsLogger : NSObject
{
    KNPlaybackSession *_session;
    _Bool _isShowcast;
}

+ (_Bool)logAnalyticsWithPlaybackSession:(id)arg1 isShowcast:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isShowcast; // @synthesize isShowcast=_isShowcast;
- (void)p_logAnimationAnalyticsValue:(long long)arg1 forKey:(id)arg2 isDistribution:(_Bool)arg3 aslmsg:(struct __asl_object_s *)arg4;
- (_Bool)logAnalytics;
@property(readonly, nonatomic) _Bool shouldLogAnalytics;
- (void)dealloc;
- (id)initWithPlaybackSession:(id)arg1 isShowcast:(_Bool)arg2;
- (id)init;

@end
