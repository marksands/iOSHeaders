//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AceObject, NSString;
@protocol SiriUIViewController;

@protocol SiriUIViewController <NSObject>
@property(nonatomic, getter=isUtteranceUserInteractionEnabled) _Bool utteranceUserInteractionEnabled;
@property(retain, nonatomic) AceObject *aceObject;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;

@optional
- (void)siriDidStopSpeakingWithIdentifier:(NSString *)arg1 speechQueueIsEmpty:(_Bool)arg2;
- (void)siriDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (double)baselineOffsetFromBottom;
- (double)desiredTopPaddingBelowController:(id <SiriUIViewController>)arg1;
- (void)siriDidScrollVisible:(_Bool)arg1;
- (void)handleAceCommand:(AceObject *)arg1;
- (void)endEditingAndCorrectByTouchPoint:(struct CGPoint)arg1;
- (void)endEditingAndCorrect:(_Bool)arg1;
- (NSString *)navigationTitle;
- (double)desiredHeightForWidth:(double)arg1;
- (double)desiredHeight;
@end

