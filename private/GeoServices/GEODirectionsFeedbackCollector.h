//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODirectionsFeedback, GEODirectionsFeedbackLogMessage, NSMutableArray, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject
{
    GEODirectionsFeedback *_currentDirectionsFeedback;
    GEODirectionsFeedbackLogMessage *_currentFeedbackLogMessage;
    NSMutableSet *_routeIDs;
    double _currentDirectionsModeStartTime;
    NSMutableArray *_navigationModes;
}

@property(retain, nonatomic) NSMutableSet *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback; // @synthesize currentDirectionsFeedback=_currentDirectionsFeedback;
@property(retain, nonatomic) GEODirectionsFeedbackLogMessage *currentFeedbackLogMessage; // @synthesize currentFeedbackLogMessage=_currentFeedbackLogMessage;
- (void).cxx_destruct;
- (id)description;
- (void)endFeedbackSessionWithTracePath:(id)arg1;
- (void)changeNavigationType:(int)arg1;
- (void)setAudioFeedback:(struct GEONavigationAudioFeedback *)arg1;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)setFinalLocation:(id)arg1 asArrival:(_Bool)arg2;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)addRouteID:(id)arg1 routeIndex:(unsigned int)arg2 stepID:(unsigned int)arg3 completeStep:(_Bool)arg4;
- (void)setupFeedbackSessionWithResponseID:(id)arg1;
- (void)startFeedbackSessionForResponseID:(id)arg1 withNavigationType:(int)arg2;
- (void)_updateFeedbackSessionWithResponseID:(id)arg1;
- (void)reset;
- (void)dealloc;

@end

