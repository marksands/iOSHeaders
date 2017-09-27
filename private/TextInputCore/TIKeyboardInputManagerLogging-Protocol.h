//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, NSURL, TIAutocorrectionList, TIKeyboardCandidate, TIKeyboardCandidateResultSet, TIKeyboardConfiguration, TIKeyboardInput, TIKeyboardLayout, TIKeyboardOutput, TIKeyboardState, TIKeyboardTouchEvent;

@protocol TIKeyboardInputManagerLogging <NSObject>
- (void)logReceivedLastAcceptedCandidateCorrected;
- (void)logReceivedCandidateRejected:(TIKeyboardCandidate *)arg1;
- (void)logReceivedTextAccepted:(TIKeyboardCandidate *)arg1;
- (void)logReceivedSetOriginalInput:(NSString *)arg1;
- (void)logKeyboardConfig:(TIKeyboardConfiguration *)arg1 forAdjustedPhraseBoundaryInForwardDirection:(_Bool)arg2 granularity:(int)arg3 keyboardState:(TIKeyboardState *)arg4;
- (void)logReceivedSkipHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 forKeyboardState:(TIKeyboardState *)arg2;
- (void)logHitKeyCode:(long long)arg1 forTouchEvent:(TIKeyboardTouchEvent *)arg2 keyboardState:(TIKeyboardState *)arg3;
- (void)logRefinements:(TIAutocorrectionList *)arg1 forCandidate:(TIKeyboardCandidate *)arg2 keyboardState:(TIKeyboardState *)arg3;
- (void)logReplacements:(NSArray *)arg1 forString:(NSString *)arg2 keyLayout:(TIKeyboardLayout *)arg3;
- (void)logKeyboardConfig:(TIKeyboardConfiguration *)arg1 textToCommit:(NSString *)arg2 forAcceptedCandidate:(TIKeyboardCandidate *)arg3 keyboardState:(TIKeyboardState *)arg4;
- (void)logCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 forKeyboardState:(TIKeyboardState *)arg2;
- (void)logAutocorrections:(TIAutocorrectionList *)arg1 forKeyboardState:(TIKeyboardState *)arg2;
- (void)logKeyboardOutput:(TIKeyboardOutput *)arg1 keyboardConfiguration:(TIKeyboardConfiguration *)arg2 forKeyboardInput:(TIKeyboardInput *)arg3 keyboardState:(TIKeyboardState *)arg4;
- (void)logKeyboardConfig:(TIKeyboardConfiguration *)arg1 forSyncToKeyboardState:(TIKeyboardState *)arg2;
- (void)logToHumanReadableTrace:(NSString *)arg1;
- (NSURL *)writeToFile;
- (void)setConfig:(NSDictionary *)arg1;
@end

