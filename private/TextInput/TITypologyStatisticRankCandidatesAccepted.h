//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TITypologyStatisticCurrentAutocorrections.h>

@class NSDictionary, NSMutableDictionary;

@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections
{
    NSMutableDictionary *_histogram;
    long long _lengthOfSelectedCandidates;
    long long _lengthOfSelectedPredictions;
}

@property(readonly, nonatomic) long long lengthOfSelectedPredictions; // @synthesize lengthOfSelectedPredictions=_lengthOfSelectedPredictions;
@property(readonly, nonatomic) long long lengthOfSelectedCandidates; // @synthesize lengthOfSelectedCandidates=_lengthOfSelectedCandidates;
@property(readonly, nonatomic) NSDictionary *histogram; // @synthesize histogram=_histogram;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)rankAndCountSelectedCandidate:(id)arg1;
- (void)countSelectedCandidate:(id)arg1 withRank:(unsigned long long)arg2;
- (void)countSelectedPrediction:(id)arg1 withRank:(unsigned long long)arg2;
- (_Bool)isCandidatePrediction:(id)arg1;
- (void)countSelectedInputStringToRejectAutocorrection;
- (void)countSelectedInputString;
- (void)countSelectedAutocorrection:(id)arg1;
- (void)addLengthOfSelectedPrediction:(id)arg1;
- (void)addLengthOfSelectedCandidate:(id)arg1;
- (unsigned long long)rankOfCandidate:(id)arg1;
- (id)structuredReport;
- (void)dealloc;
- (id)init;

@end

